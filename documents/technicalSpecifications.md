# Technical Specifications

<div align="center">

---
**Title:** PAM Assist Mindful - Technical Specifications

**Author:** Mathias DELILLE

**Created on:** 13 March 2025

**Last updated:** 25 March 2025

</div>

---

<details>
<summary>Table of Contents <span style="font-style: italic;">(Click to expand)</span></summary>

- [Technical Specifications](#technical-specifications)
  - [Introduction](#introduction)
  - [Project Scope](#project-scope)
  - [Hardware Components](#hardware-components)
    - [Component List](#component-list)
    - [Microphone](#microphone)
    - [Core Processing Unit](#core-processing-unit)
    - [Voice Recognition Module](#voice-recognition-module)
    - [Display](#display)
  - [Software Workflow](#software-workflow)
    - [Voice Data Processing](#voice-data-processing)
    - [Display Logic](#display-logic)
  - [Communication Protocols](#communication-protocols)
  - [Power Management](#power-management)
  - [Safety Considerations](#safety-considerations)
  - [Testing and Validation](#testing-and-validation)
    - [Unit Testing](#unit-testing)
    - [Integration Testing](#integration-testing)
    - [System Testing](#system-testing)
    - [User Acceptance Testing](#user-acceptance-testing)
    - [Documentation of Results](#documentation-of-results)
  - [Maintenance and Support](#maintenance-and-support)
  - [Future Improvements](#future-improvements)
  - [Appendices](#appendices)

</details>

## Introduction

Provide an overview of the PAM Assist Mindful project, its purpose, and its key features. This device is designed to recognize voice commands and transcribe them onto a screen.

## Project Scope

Define the scope of the project, including the objectives, deliverables, and any constraints or limitations.

## Hardware Components

### Component List

| Component            | Model                              | Specifications                                          | Integration     |
| -------------------- | ---------------------------------- | ------------------------------------------------------- | --------------- |
| I2S Microphone       | INMP441                            | Signal-to-Noise Ratio: 61 dB <br> Sensitivity: -26 dBFS | I2S             |
| Core processing unit | Raspberry Pi 3 B+                  | Quad Core 1.2GHz <br> 1GB RAM                           | GPIO, HDMI, USB |
| MicroSD Card         | EMTEC ECMSDM64GXC10SP              | 64GB Class 10                                           | MicroSD Slot    |
| Cooling              | Heatsink + Fan                     | Reduces temperature by up to 20°C                       | Mounted on CPU  |
| Power Supply         | CanaKit 5V 2.5A USB-C Power Supply | 5V/2.5A USB-C                                           | USB-C Port      |
| HDMI Screen          | WHTC W090P50H1RN + RTD2660H        | 1024x600 resolution  <br> LCD Controller                | HDMI, USB       |

### Microphone

Model: INMP441
Specifications: Signal-to-Noise Ratio: 61 dB, Sensitivity: -26 dBFS
Integration: Connect via I2S interface

### Core Processing Unit

Model: Raspberry Pi 3 B+
Specifications: Quad Core 1.2GHz, 1GB RAM
Integration: Interfaces with GPIO, HDMI, USB

### Voice Recognition Module

Model: Elechouse V3
Specifications: Offline speech recognition, supports 80 commands
Integration: Connect via UART interface

### Display

Model: WHTC W090P50H1RN + RTD2660H
Specifications: 1024x600 resolution, LCD Controller
Integration: Connect via HDMI and USB

## Software Workflow

### Voice Data Processing

- **Data Acquisition:** Explain how voice data is read from the microphone. Refer to the `read_voice` function in [src/voice_control/voice/voice_view.py](../src/voice_control/voice/voice_view.py).
- **Data Processing:** Describe how the voice data is processed and recognized using the voice recognition module. Refer to the `process_voice` function in [src/voice_control/voice/voice_view.py](../src/voice_control/voice/voice_view.py).

### Display Logic

- **Initialization:** Explain the setup process for the display. Refer to the `setup_display` function in [src/display_control/display_control.ino](../src/display_control/display_control.ino).
- **Display Update:** Describe the logic for updating the display with transcribed text. Refer to the `update_display` function in [src/display_control/display_control.ino](../src/display_control/display_control.ino).

## Communication Protocols

<!-- TODO: Describe the communication protocols used between different components, such as UART for the voice recognition module and HDMI for the display. -->

## Power Management

The power management strategy for the PAM Assist Mindful device involves ensuring a stable and efficient power supply to all components. The primary power source is a 5V 2.5A USB-C power supply, which provides sufficient power for the Raspberry Pi 3 B+, the microphone, the voice recognition module, and the display.

- **Power Supply:** The CanaKit 5V 2.5A USB-C Power Supply is used to power the Raspberry Pi 3 B+ and all connected peripherals. This power supply is chosen for its reliability and ability to provide consistent power.
- **Power Distribution:** The power from the USB-C supply is distributed to the Raspberry Pi, which in turn powers the connected components through its GPIO pins and USB ports.
- **Cooling:** A heatsink and fan are used to manage the temperature of the Raspberry Pi, ensuring it operates within safe thermal limits. This cooling solution helps prevent overheating and ensures stable performance.
- **Power Monitoring:** The system includes basic power monitoring to ensure that all components receive adequate power. If any component draws excessive power, the system can alert the user or take corrective action to prevent damage.

## Safety Considerations

To ensure the safe operation of the PAM Assist Mindful device, several safety measures have been implemented in both hardware and software:

- **Overcurrent Protection:** The power supply includes overcurrent protection to prevent damage to the components in case of a short circuit or excessive current draw.
- **Thermal Management:** The cooling system (heatsink and fan) ensures that the Raspberry Pi operates within safe temperature limits, preventing overheating and potential thermal damage.
- **Secure Connections:** All connections between components are secured to prevent accidental disconnections, which could lead to malfunction or damage.
- **Software Safety Checks:** The software includes safety checks to monitor the status of the components. If any anomalies are detected, the system can shut down safely or alert the user.
- **User Warnings:** Clear warnings and instructions are provided to the user to ensure safe handling and operation of the device.

## Testing and Validation

To ensure the PAM device meets all specifications and requirements, a comprehensive testing and validation process is implemented. Since hardware devices cannot be fully tested automatically like software using CI/CD pipelines, the following manual and semi-automated testing procedures are employed:

### Unit Testing

- **Hardware Components:** Each hardware component (e.g., microphone, display, voice recognition module) is individually tested to verify its functionality and compliance with specifications.
- **Software Modules:** Software functions, such as `read_voice`, `process_voice`, `setup_display`, and `update_display`, are tested in isolation to ensure they perform as expected.

### Integration Testing

- **Hardware-Software Integration:** Verify the interaction between hardware components and software modules. For example, ensure the microphone correctly captures voice data and passes it to the voice recognition module for processing.
- **Component Interfacing:** Test the communication protocols (e.g., I2S, UART, HDMI) to ensure seamless data transfer between components.

### System Testing

- **End-to-End Testing:** Perform end-to-end tests to validate the complete workflow, from voice command recognition to text display on the screen.
- **Stress Testing:** Test the device under various conditions, such as prolonged usage, high ambient temperatures, and varying power supply levels, to ensure stability and reliability.
- **Power Management Testing:** Verify that the power distribution and cooling systems function correctly under different load conditions.

### User Acceptance Testing

- **Usability Testing:** Conduct tests with end-users to evaluate the device's ease of use, responsiveness, and overall user experience.
- **Real-World Scenarios:** Test the device in real-world environments to ensure it performs well under typical usage conditions, such as background noise or varying lighting.

### Documentation of Results

- **Test Logs:** Maintain detailed logs of all tests performed, including test cases, expected outcomes, actual results, and any issues encountered.
- **Issue Tracking:** Document and address any defects or inconsistencies identified during testing to ensure the final product meets quality standards.

By following these testing and validation procedures, the PAM Assist Mindful device can be thoroughly evaluated to ensure it meets all functional, performance, and safety requirements.

## Maintenance and Support

<!-- TODO: Provide guidelines for the maintenance and support of the device. Include information on regular maintenance tasks, troubleshooting procedures, and contact information for technical support. -->

## Future Improvements

Potential future improvements and enhancements for the PAM Assist Mindful device include:

- **Enhanced Voice Recognition:** Implementing more advanced voice recognition algorithms to improve accuracy and support for more commands.
- **Battery Power Option:** Adding a battery power option to make the device portable and usable without a constant power supply.
- **Wireless Connectivity:** Integrating wireless connectivity options such as Wi-Fi or Bluetooth to allow remote control and monitoring.
- **Touchscreen Display:** Upgrading to a touchscreen display to provide an interactive user interface.
- **Additional Sensors:** Adding additional sensors (e.g., ambient light sensor, proximity sensor) to enhance the functionality and adaptability of the device.
- **Custom Enclosure:** Designing a custom enclosure to house all components securely and improve the overall aesthetics and usability of the device.
- **Screen Rotation 260°:** Implementing a screen rotation feature to allow the display to be viewed from different angles, enhancing usability in various environments using a slip ring.

## Appendices

<!-- TODO: Include any additional information, diagrams, or references that support the technical specifications. This may include detailed schematics, data sheets, or user manuals. -->
