import serial
import matplotlib.pyplot as plt
import time
import threading
from collections import deque
from matplotlib.animation import FuncAnimation

# Open serial port
ser = serial.Serial("COM4", 115200, timeout=1)

# Thread-safe data buffer
distance_data = deque(maxlen=100)  # Limit to 100 points
data_lock = threading.Lock()

def read_distance():
    """Reads distance from TF-Luna via UART."""
    while True:
        try:
            data = ser.readline().decode('utf-8').strip()
            print(f"Raw data: {data}")  # Debugging print statement
            if data.startswith("Distance: ") and data.endswith('cm'):
                distance_str = data[len("Distance: "):-2].strip()  # Remove prefix and 'cm'
                distance = int(distance_str) * 10  # Convert to mm
                with data_lock:
                    distance_data.append(distance)
                print(f"Distance: {distance} mm")  # Debugging print statement
            else:
                print("Invalid data format")  # Debugging print statement
        except Exception as e:
            print(f"Serial error: {e}")
        # time.sleep(0.01)

# Start the distance reading thread
thread = threading.Thread(target=read_distance)
thread.daemon = True
thread.start()

# Set up plot
fig, ax = plt.subplots()
line, = ax.plot([], [], 'ro')
ax.set_xlim(0, 100)
ax.set_ylim(0, 4000)
ax.set_title("TF-Luna Distance Measurement")
ax.set_xlabel("Time")
ax.set_ylabel("Distance (mm)")

# Animation function
def update(frame):
    with data_lock:
        if distance_data:
            y_data = list(distance_data)
            x_data = range(len(y_data))
            
            line.set_data(x_data, y_data)
            ax.relim()
            ax.autoscale_view(scaley=True, scalex=False)  # Only auto-scale Y axis
            
    return line,

# Use matplotlib's animation instead of manual loop
ani = FuncAnimation(fig, update, interval=50, blit=True)

plt.show()