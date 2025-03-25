# Functional Specifications

<div align="center">

---
**Title:** PAM Assist Mindful

**Author:** Mathias DELILLE

**Created on:** March 12<sup>th</sup>, 2025

**Last updated:** March 25<sup>th</sup>, 2025

</div>

---

<details>
<summary>Table of Contents <span style="font-style: italic;">(Click to expand)</span></summary>

- [Functional Specifications](#functional-specifications)
  - [Preamble](#preamble)
  - [1. Introduction](#1-introduction)
    - [1.1 Project Overview](#11-project-overview)
    - [1.2 Project Definition](#12-project-definition)
      - [1.2.1 Vision](#121-vision)
      - [1.2.2 Scope](#122-scope)
      - [1.2.3 Deliverables](#123-deliverables)
    - [1.3 Project Timeline](#13-project-timeline)
      - [1.3.1 Retro-Planning](#131-retro-planning)
      - [1.3.2 Milestones](#132-milestones)
      - [1.3.3 Resources](#133-resources)
      - [1.3.4 Assumptions and Constraints](#134-assumptions-and-constraints)
  - [2. Target Audience](#2-target-audience)
    - [2.1 Target Audience](#21-target-audience)
    - [2.2 User Personas](#22-user-personas)
      - [2.2.1 Enzo Williams - 78 years old](#221-enzo-williams---78-years-old)
      - [2.2.2 Sarah Chen - 45 years old](#222-sarah-chen---45-years-old)
      - [2.2.3 John Marlow - 35 years old](#223-john-marlow---35-years-old)
    - [2.3 Use Cases List](#23-use-cases-list)
    - [2.4 Use Case Descriptions](#24-use-case-descriptions)
      - [2.4.1 Navigation and Mobility](#241-navigation-and-mobility)
      - [2.4.2 Medication Reminders](#242-medication-reminders)
      - [2.4.3 Conversation Transcription](#243-conversation-transcription)
      - [2.4.4 Battery Management](#244-battery-management)
  - [3. UI/UX](#3-uiux)
    - [3.1 Inspiration](#31-inspiration)
    - [3.2 Design Principles](#32-design-principles)
    - [3.3 Logo](#33-logo)
  - [4. Functional Requirements](#4-functional-requirements)
    - [4.1 Navigation and Mobility](#41-navigation-and-mobility)
    - [4.2 Medication Reminders](#42-medication-reminders)
    - [4.3 Conversation Transcription](#43-conversation-transcription)
    - [4.4 Battery Management](#44-battery-management)
  - [5. Non-Functional Requirements](#5-non-functional-requirements)
    - [5.1 Reliability](#51-reliability)
    - [5.2 Performance](#52-performance)
    - [5.3 Maintainability](#53-maintainability)
  - [6. Future Improvements](#6-future-improvements)
    - [6.1 Emergency Assistance](#61-emergency-assistance)
    - [6.2 Automatic Medication Management](#62-automatic-medication-management)
    - [6.3 Mobile App Integration](#63-mobile-app-integration)
    - [6.4 AI Assistance for Alzheimer's (Abandonned)](#64-ai-assistance-for-alzheimers-abandonned)
  - [7. End Matter](#7-end-matter)
    - [7.1 Naming Inspiration](#71-naming-inspiration)
    - [7.2 License](#72-license)
  - [Physical Specifications](#physical-specifications)
    - [Final Product](#final-product)
    - [Prototype](#prototype)

</details>

## Preamble

*This document outlines the functional specifications for PAM Assist Mindful (PAM), a robotic assistant designed to aid the elderly in various aspects of their daily lives. PAM aims to provide comprehensive, round-the-clock support, addressing the limitations of existing solutions.*

## 1. Introduction

### 1.1 Project Overview

PAM Assist Mindful (PAM) is an innovative robotic assistant specifically designed to enhance the quality of life for the elderly. By leveraging advanced technology, PAM provides comprehensive, round-the-clock support, addressing the limitations of existing solutions. The project aims to create a reliable companion that not only assists with daily tasks but also ensures safety and well-being. PAM's features include seamless navigation, timely medication reminders, and accurate conversation transcription, making it an indispensable tool for elderly care. The ultimate goal is to foster independence and peace of mind for both the elderly and their caregivers.

### 1.2 Project Definition

#### 1.2.1 Vision

The vision of this project is to develop a robotic assistant that can provide personalized, reliable, and compassionate care for the elderly.

Objectives include:

- Enhancing the quality of life for the elderly by providing comprehensive support.
- Promoting independence and well-being through advanced technology.
- Creating a reliable companion that can navigate spaces, manage medication, and facilitate communication.
- Fostering peace of mind for both the elderly and their caregivers.
- Enabling the elderly to live comfortably and securely in their own homes.
- Supporting caregivers by providing an extra layer of assistance and monitoring.
- Embracing the principles of inclusivity, accessibility, and dignity in elderly care.
- Continuously improving and evolving to meet the changing needs of the elderly population.
- Collaborating with healthcare professionals, researchers, and experts to optimize PAM's functionality and impact.
- Ensuring that PAM is user-friendly, intuitive, and adaptable to individual preferences and requirements.
- Embracing ethical considerations, data privacy, and security measures to protect user information and maintain confidentiality.

#### 1.2.2 Scope

This project will use the following technologies and methodologies:

- Robotics: PAM will be a physical robot capable of autonomous navigation and interaction.
- Artificial Intelligence: PAM will leverage AI for speech recognition, object detection, and decision-making.
- Human-Centered Design: PAM will be designed with a focus on user experience, accessibility, and inclusivity.
- Continuous Improvement: PAM will evolve over time based on user feedback, technological advancements, and emerging needs.
- Collaboration: The project will involve professionals and partners to ensure a holistic and impactful solution.

#### 1.2.3 Deliverables

| Deliverable               | Purpose                                                    | Document                         |
| ------------------------- | ---------------------------------------------------------- | -------------------------------- |
| Functional Specifications | Define the features and capabilities of PAM.               | [🔗](functionalSpecifications.md) |
| Technical Specifications  | Define the technical requirements and capabilities of PAM. | [🔗](technicalSpecifications.md)  |
| Test Plan                 | Outline the testing procedures and criteria for PAM.       | [🔗](testPlan.md)                 |
| 3D Model                  | Visual representation of PAM's design and dimensions.      | [🔗](../3d/)                      |
| Source Code               | Implementation of PAM's software and algorithms.           | [🔗](../src/)                     |
| User Manual               | Guide for users on how to interact with PAM.               | [🔗](userManual.md)               |

### 1.3 Project Timeline

#### 1.3.1 Retro-Planning

The project will be developed on 22 months, from 27 November 2024 to 29 May 2026.

#### 1.3.2 Milestones

| Date             | Milestone                                   |
| ---------------- | ------------------------------------------- |
| 27 November 2024 | Project Kickoff                             |
| 13 December 2024 | Definition of Necessary Components and cost |
| 16 December 2024 | Components Order                            |
| 16 January 2025  | End of Components Individual Testing        |
| 5 February 2025  | Functional Specifications Completed         |
| 26 February 2025 | Technical Specifications Completed          |
| 18 March 2025    | Test Plan Completed                         |
| 17 April 2025    | 3D Model Completed                          |
| 15 May 2025      | Hardware Assembly Completed                 |
| 12 June 2025     | Software Implementation V1 Completed        |
| 26 June 2025     | User Manual Completed                       |
| 7 July 2025      | Begin of the Test Phase                     |
| 3 December 2025  | Test Phase End                              |
| 17 December 2025 | Improvements Based on Feedbacks Begin       |
| 29 May 2026      | Project V2 Completion                       |

#### 1.3.3 Resources

- Single Developer
- Student Budget (Limited)
- Open-Source Technologies (Tools, Libraries, Frameworks)
- Estimate time based on 2 afternoons dedicated to the project per week (3 hours each): **468 hours** (78 weeks x 2 days/weeks x 3 hours/day = 468 hours)
  - **V1: 180 hours** (30 weeks x 2 days/weeks x 3 hours/day = 180 hours)
  - **V2: 276 hours** (46 weeks x 2 days/weeks x 3 hours/day = 276 hours)
  - **Vacation: 12 hours** (2 weeks x 2 days/weeks x 3 hours/day = 12 hours)
  - **Total Time: 456 hours** (180 hours + 276 hours = 456 hours)

#### 1.3.4 Assumptions and Constraints

- Budget constraints for components and materials.
- Time constraints due to balancing academic commitments and a part-time job.
- Limited experience with robotics and AI development.
- Reliance on open-source tools and resources for development.
- Potential delays due to unforeseen circumstances or technical challenges.
- Restricted testing environment and resources for comprehensive validation.
- Limited access to specialized equipment and facilities for prototyping and testing.
- Insufficient support for hardware and software integration due to individual development.

---

## 2. Target Audience

### 2.1 Target Audience

The target audience for this project includes:

- **Elderly Individuals**: Those who require assistance with daily tasks and activities, aiming to enhance their quality of life, promote independence, and ensure safety and well-being.
- **Caregivers**: Family members, healthcare professionals, and other caregivers who seek reliable support in monitoring and assisting the elderly, thereby reducing their workload and providing peace of mind.
- **Healthcare Providers**: Medical professionals and institutions interested in integrating advanced robotic assistance into elderly care to improve patient outcomes and streamline care processes.

This diverse audience ensures that PAM is developed with a comprehensive understanding of the needs and challenges faced by the elderly and their support systems.

### 2.2 User Personas

#### 2.2.1 Enzo Williams - 78 years old

<img alt="AI generate reprensentation of Enzo Williams, 78 years old" src="images/personas-1.png" width="200" height="200px" style="margin-right: 20px;">

**Background:**

Enzo is a 78-year-old retired teacher who lives alone in a suburban home. He enjoys reading, gardening, and spending time with his grandchildren. Enzo has mild arthritis and hearing loss, which sometimes makes it challenging for him to move around and communicate effectively.

**Goals:**

- Maintain independence and autonomy in daily activities.
- Manage his medication schedule and health needs.
- Stay connected with family and friends through conversations and social interactions.

**Frustrations:**

- Forgetting to take his medication on time.
- Struggling to hear and participate in conversations.
- Feeling isolated and lonely due to limited social interactions.

#### 2.2.2 Sarah Chen - 45 years old

<img alt="AI generate reprensentation of Sarah Chen, 45 years old" src="images/personas-2.png" width="200" height="200px" style="margin-right: 20px;">

**Background:**

Sarah is a 45-year-old working professional who lives with her husband and two children. She works full-time as a nurse and is responsible for caring for her elderly mother, who has mobility issues and requires assistance with daily tasks. Sarah's busy schedule and caregiving responsibilities often leave her feeling overwhelmed and exhausted.

**Goals:**

- Ensure her mother's safety and well-being at all times.
- Monitor her mother's medication intake and health status.
- Balance work, family, and caregiving responsibilities effectively.

**Frustrations:**

- Juggling multiple roles and responsibilities.
- Feeling anxious about her mother's health and safety.
- Struggling to find time for self-care and relaxation.

#### 2.2.3 John Marlow - 35 years old

<img alt="AI generate reprensentation of John Marlow, 35 years old" src="images/personas-3.png" width="200" height="200px" style="margin-right: 20px;">

**Background:**

John is a 35-year-old healthcare professional working for a healthcare provider. He specializes in geriatric care and is passionate about improving the quality of life for elderly patients. John is responsible for overseeing the integration of advanced technologies into patient care, ensuring that new solutions are both effective and user-friendly. He is dedicated to staying updated with the latest advancements in healthcare technology and is always looking for innovative ways to enhance patient outcomes.

**Goals:**

- Implement advanced robotic assistance to improve elderly care.
- Ensure that new technologies are user-friendly and accessible for elderly patients.
- Enhance patient outcomes through the integration of innovative solutions.

**Frustrations:**

- Difficulty in finding reliable and effective technological solutions for elderly care.
- Ensuring that elderly patients can easily adapt to and use new technologies.
- Balancing the demands of his job with the need to stay updated on the latest advancements in healthcare technology.

---

### 2.3 Use Cases List

| Use Case ID | Use Case Name              | Description                                                                   |
| ----------- | -------------------------- | ----------------------------------------------------------------------------- |
| UC-01       | Navigation and Mobility    | PAM will navigate available spaces without colliding with obstacles.          |
| UC-02       | Medication Reminders       | PAM will remind individuals to take their medication.                         |
| UC-03       | Conversation Transcription | PAM will provide written transcriptions of oral conversations.                |
| UC-04       | Battery Management         | PAM will monitor and manage its battery usage to ensure continuous operation. |

---

### 2.4 Use Case Descriptions

#### 2.4.1 Navigation and Mobility

| Field         | Description                                                                                                                                                                                                         |
| ------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Use Case ID   | UC-01                                                                                                                                                                                                               |
| Use Case Name | Navigation and Mobility                                                                                                                                                                                             |
| Actors        | PAM, Environment                                                                                                                                                                                                    |
| Description   | PAM will navigate available spaces without colliding with obstacles.                                                                                                                                                |
| Precondition  | PAM is powered on and operational.                                                                                                                                                                                  |
| Postcondition | PAM reaches the desired destination without colliding with obstacles.                                                                                                                                               |
| Main Flow     | 1. PAM receives a navigation command. <br> 2. PAM identifies the target location. <br> 3. PAM moves towards the target location. <br> 4. PAM avoids obstacles in its path. <br> 5. PAM reaches the target location. |

---

#### 2.4.2 Medication Reminders

| Field         | Description                                                                                                                                                                                                                                              |
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Use Case ID   | UC-02                                                                                                                                                                                                                                                    |
| Use Case Name | Medication Reminders                                                                                                                                                                                                                                     |
| Actors        | PAM, User                                                                                                                                                                                                                                                |
| Description   | PAM will remind individuals to take their medication.                                                                                                                                                                                                    |
| Precondition  | PAM is powered on and operational.                                                                                                                                                                                                                       |
| Postcondition | PAM provides a medication reminder to the user.                                                                                                                                                                                                          |
| Main Flow     | 1. PAM checks the current time. <br> 2. PAM alerts the user to take their medication. <br> 3. PAM confirms the medication has been taken. <br> 4. PAM logs the medication intake. <br> 5. At the end of each week PAM ask the user to refill the pillbox |

---

#### 2.4.3 Conversation Transcription

| Field         | Description                                                                                                                                                                                                                                                        |
| ------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Use Case ID   | UC-03                                                                                                                                                                                                                                                              |
| Use Case Name | Conversation Transcription                                                                                                                                                                                                                                         |
| Actors        | PAM, User                                                                                                                                                                                                                                                          |
| Description   | PAM will provide written transcriptions of oral conversations.                                                                                                                                                                                                     |
| Precondition  | PAM is powered on and operational.                                                                                                                                                                                                                                 |
| Postcondition | PAM transcribes the conversation accurately.                                                                                                                                                                                                                       |
| Main Flow     | 1. PAM listens to the conversation. <br> 2. PAM transcribes the conversation in real-time. <br> 3. PAM displays the transcription on its screen. <br> 4. PAM identifies different speakers. <br> 5. PAM changes the color of the text to indicate who is speaking. |

---

#### 2.4.4 Battery Management

| Field         | Description                                                                                                                                                                                                                                                     |
| ------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Use Case ID   | UC-04                                                                                                                                                                                                                                                           |
| Use Case Name | Battery Management                                                                                                                                                                                                                                              |
| Actors        | PAM, Environment                                                                                                                                                                                                                                                |
| Description   | PAM will monitor and manage its battery usage to ensure continuous operation.                                                                                                                                                                                   |
| Precondition  | PAM is powered on and operational.                                                                                                                                                                                                                              |
| Postcondition | PAM maintains sufficient battery charge for continuous operation.                                                                                                                                                                                               |
| Main Flow     | 1. PAM monitors its battery level. <br> 2. PAM estimates the remaining battery life. <br> 3. PAM alerts the user when the battery is low (20%). <br> 4. PAM returns to the charging station to recharge. <br> 5. PAM resumes normal operation after recharging. |

---

## 3. UI/UX

### 3.1 Inspiration

<!-- TODO: Define clear exemple of the inspiration of the robot -->

### 3.2 Design Principles

- **User-Centered Design**: PAM's design will prioritize user experience, accessibility, and inclusivity.
- **Intuitive Interface**: PAM's interface will be easy to use, understand for elderly users.
- **Clear Communication**: PAM's communication methods will be clear, concise, and effective for conveying information.
- **Adaptive Interaction**: PAM will adapt its interaction style based on user preferences and feedback.
- **Aesthetic Appeal**: PAM's design will be visually appealing, friendly, and non-intimidating for users.

### 3.3 Logo

<!-- TODO: Create a Logo -->

---

## 4. Functional Requirements

### 4.1 Navigation and Mobility

- **Functionality**: PAM will navigate available spaces without colliding with obstacles.
- **Details**: <!-- TODO: Provide detailed specifications for navigation and mobility. -->

### 4.2 Medication Reminders

- **Functionality**: PAM will remind individuals to take their medication.
- **Details**:
  - Integrated pillbox to manage and dispense medication.
  - Based on local time, PAM will be able to reject the access to the pillbox if the pills have already been taken.

### 4.3 Conversation Transcription

- **Functionality**: PAM will provide written transcriptions of oral conversations.
- **Details**:
  - Aid individuals with significant hearing loss.
  - Enable following conversations without the need for raised voices.
  - Identify different speakers and change the color of the text to indicate who is speaking.

### 4.4 Battery Management

- **Functionality**: PAM will monitor and manage its battery usage to ensure continuous operation.
- **Details**:
  - Estimate remaining battery life.
  - Alert the user when the battery is low (20%).
  - Return to the charging station to recharge.
  - Resume normal operation after recharging.

---

## 5. Non-Functional Requirements

### 5.1 Reliability

- **Description**: PAM will be reliable in its performance and operation.
- **Details**:
  - Ensure consistent navigation without collisions.
  - Provide accurate medication reminders.
  - Deliver real-time conversation transcriptions.
  - Maintain sufficient battery charge for continuous operation.

### 5.2 Performance

- **Description**: PAM will deliver high performance and responsiveness.
- **Details**:
  - Real-time navigation and mobility.
  - Timely medication reminders.
  - Accurate conversation transcriptions.
  - Efficient battery management.

### 5.3 Maintainability

- **Description**: PAM will be designed for easy maintenance and updates.
- **Details**:
  - Modular components for quick repairs and replacements.
  - Software updates for improved functionality.
  - Remote diagnostics and troubleshooting.
  - User-friendly maintenance procedures.

---

## 6. Future Improvements

### 6.1 Emergency Assistance

- **Description**: PAM will call for help or contact a loved one using voice commands.
- **Details**:
  - Dial emergency numbers or pre-registered contacts as needed.
  - Send location information to emergency services or contacts.
  - Provide real-time updates on the situation.

### 6.2 Automatic Medication Management

- **Description**: Integration of automatic medication management.
- **Details**:
  - Automatic dispensing of medication based on schedule.
  - Alerts for missed doses or incorrect medication.
  - Integration with healthcare providers for monitoring and adjustments.

### 6.3 Mobile App Integration

- **Description**: Companion mobile app for remote monitoring and control.
- **Details**:
  - View PAM's status, battery level, and location.
  - Receive notifications and alerts on medication reminders.
  - Communicate with PAM remotely through voice commands.
  - Access real-time conversation transcriptions and logs.

### 6.4 AI Assistance for Alzheimer's (Abandonned)

***Abandon Reason:*** Enzo's moonshot has changed to another project and this feature is no longer being pursued due to the huge developement and training time of this kind of AI Assistance.

- **Description**: AI assistance for individuals with Alzheimer's (Enzo's moonshot).
- **Details**: This feature would have been integrated into PAM to provide additional support for individuals with Alzheimer's, creating an artificial memory capable of remebering people, environment and information about daily life.

---

## 7. End Matter

### 7.1 Naming Inspiration

- **PAM Name**: Inspired by [ZWEI](https://en.wikipedia.org/wiki/EINE_and_ZWEI#Naming) recursivity, also known in [GNU](https://en.wikipedia.org/wiki/GNU#Name).

### 7.2 License

<!-- TODO: Define the License to use -->

<!-- TODO: See to integrate these datas -->
## Physical Specifications

### Final Product

- **Height**: Approximately 1.5 meters.
- **Note**: The final product size is intended to provide a significant presence and visibility in the home environment and ensure an easy accessibilty for people that sometime can't bend down.

### Prototype

- **Height**: Approximately 50 centimeters.
- **Note**: The smaller prototype size is intended to significantly reduce costs and 3D printing time.
