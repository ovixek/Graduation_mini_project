<p align="center">
  <img src="https://img.shields.io/badge/Project-Anti--Sleep%20Alarm%20for%20Drivers-blue?style=for-the-badge&logo=arduino&logoColor=white" />
  <img src="https://img.shields.io/badge/Platform-Arduino%20Nano-00979D?style=for-the-badge&logo=arduino&logoColor=white" />
  <img src="https://img.shields.io/badge/Sensors-IR%20Blink%20Sensor-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Working-brightgreen?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Power-9V%20Battery-yellow?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Alert-Buzzer%20%2B%20Motor-red?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Maintainer-Abhishek%20Pujari-green?style=for-the-badge" />
</p>

## Anti-Sleep Alarm for Drivers

A simple yet effective Arduino-based safety system designed to detect driver drowsiness and alert them instantly through sound and vibration. This project aims to minimize road accidents caused due to fatigue by continuously monitoring eye-blink patterns using an IR sensor and triggering alerts whenever the system detects prolonged eye closure.

# Project Overview

Drowsy driving is one of the major causes of road accidents. This project provides an affordable, portable, and efficient solution using basic hardware components.

# The device uses:

IR eye-blink sensor to detect eyelid closure

Arduino Nano to process the sensor data

Piezo buzzer for alert beeps

BO Motor for vibration alerts

Relay to control the motor

9V battery for power

Whenever the driver’s eyes remain closed beyond a safe threshold, the system activates the buzzer and motor to wake the driver. Once the eyes open again, the alerts automatically turn off.

# Features

 Instant drowsiness detection using IR-based eye tracking

 Audible emergency alert through buzzer

 Haptic alert using BO motor

 Automatic ON/OFF response based on eye-blink status

 Low power & portable

 Useful for long-distance and night drivers

 Low-cost design suitable for mass implementation

# Hardware Used

Arduino Nano

IR Eye Blink Sensor

Relay Module

Piezo Buzzer

BO Motor

SPST Switch

9V Battery

Eye-glasses mounted sensor setup

# Circuit Connections

IR Sensor:

OUT → D2

VCC → 5V

GND → GND

Relay

IN → D8

VCC → 5V

GND → GND

Buzzer

. → D9

– → GND

BO Motor

Connected via relay switching

Switch

Battery + → Switch → Arduino Vin

Battery – → GND
