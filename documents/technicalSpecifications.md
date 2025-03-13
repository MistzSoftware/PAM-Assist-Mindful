# Technical Specifications

<div align="center">

---
**Title:** PAM Assist Mindful - Technical Specifications

**Author:** Mathias DELILLE

**Created on:** 13 march 2025

**Last updated:** 13 march 2025

</div>

---

<details>
<summary>Table of Contents <span style="font-style: italic;">(Click to expand)</span></summary>

- [Technical Specifications](#technical-specifications)
  - [Introduction](#introduction)
  - [Hardware Components](#hardware-components)
    - [Compoenent List](#compoenent-list)
    - [Microphone](#microphone)
    - [Microcontroller](#microcontroller)
    - [Voice Recognition Module](#voice-recognition-module)
    - [Lidar Sensor](#lidar-sensor)
    - [Motor Control](#motor-control)
  - [Software Workflow](#software-workflow)
    - [Lidar Data Processing](#lidar-data-processing)
    - [Motor Control Logic](#motor-control-logic)
  - [Communication Protocols](#communication-protocols)
  - [Power Management](#power-management)
  - [Safety Considerations](#safety-considerations)
  - [Future Improvements](#future-improvements)

</details>

## Introduction

Provide an overview of the PAM Assist Mindful project, its purpose, and its key features.

## Hardware Components

### Compoenent List

| Component            | Model                              | Specifications                                          | Integration     |
| -------------------- | ---------------------------------- | ------------------------------------------------------- | --------------- |
| Lidar Sensor         | TF-Luna                            | Range: 0.2 - 8m <br> Accuracy: ±3cm                     | UART            |
| Motor Control        | DRV8833                            | Voltage: 2.7 - 10.8V <br> Current: 1.5A                 | PWM             |
| I2S Microphone       | INMP441                            | Signal-to-Noise Ratio: 61 dB <br> Sensitivity: -26 dBFS | I2S             |
| Core processing unit | Raspberry Pi 3 B+                  | Quad Core 1.2GHz <br> 1GB RAM                           | GPIO, HDMI, USB |
| MicroSD Card         | EMTEC ECMSDM64GXC10SP              | 64GB Class 10                                           | MicroSD Slot    |
| Cooling              | Heatsink + Fan                     | Reduces temperature by up to 20°C                       | Mounted on CPU  |
| Power Supply         | CanaKit 5V 2.5A USB-C Power Supply | 5V/2.5A USB-C                                           | USB-C Port      |
| HDMI Screen          | WHTC W090P50H1RN + RTD2660H        | 1024x600 resolution  <br> LCD Controller                | HDMI, USB       |

### Microphone

Model: Adafruit MAX4466
Specifications: Adjustable gain, low noise
Integration: Connect to analog input of the microcontroller
Audio Codec
Model: WM8731
Specifications: 24-bit, stereo, ADC/DAC
Integration: Connect via I2C and I2S interfaces

### Microcontroller

Model: ESP32
Specifications: Dual core, Wi-Fi, Bluetooth
Integration: Interfaces with I2C, UART, PWM

### Voice Recognition Module

Model: Elechouse V3
Specifications: Offline speech recognition, supports 80 commands
Integration: Connect via UART interface

### Lidar Sensor

- **Model:** TF-Luna
- **Specifications:** Provide details about the sensor's range, accuracy, and other relevant specifications.
- **Integration:** Describe how the lidar sensor is integrated into the system.

### Motor Control

- **Model:** DRV8833
- **Specifications:** Provide details about the motor controller's capabilities and specifications.
- **Integration:** Describe how the motor controller is integrated into the system.

## Software Workflow

### Lidar Data Processing

- **Data Acquisition:** Explain how data is read from the lidar sensor. Refer to the `read_distance` function in [src/lidar_control/lidar/lidar_view.py](../src/lidar_control/lidar/lidar_view.py).
- **Data Visualization:** Describe how the data is visualized using matplotlib. Refer to the `update` function in [src/lidar_control/lidar/lidar_view.py](../src/lidar_control/lidar/lidar_view.py).

### Motor Control Logic

- **Initialization:** Explain the setup process for the motor controller. Refer to the `setup` function in [src/motor_control/motor_control.ino](../src/motor_control/motor_control.ino).
- **Control Loop:** Describe the logic for controlling the motors. Refer to the `loop` function in [src/motor_control/motor_control.ino](../src/motor_control/motor_control.ino).

## Communication Protocols

Describe the communication protocols used between different components, such as UART for the lidar sensor and motor controller.

## Power Management

<!-- TODO: details about the power requirements and management strategies for the system. -->

## Safety Considerations

<!-- TODO: details any safety measures implemented in the hardware and software to ensure safe operation. -->

## Future Improvements

<!-- TODO: Outline potential future improvements and enhancements for the system. -->