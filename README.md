# PenduloBot – STM32F3-Based Self-Balancing Robot

A firmware project for an STM32F303K8T6 microcontroller that uses an MPU6050 IMU sensor and LQR control to balance an inverted pendulum robot.

## Project Overview

- **MCU**: STM32F303K8T6  
- **Sensor**: MPU6050 (accelerometer + gyroscope)  
- **Control**: Linear Quadratic Regulator (LQR)  
- **IDE**: STM32CubeIDE  
- **HAL**: STM32CubeF3 HAL drivers  

## Directory Structure

```bash
PenduloBot/
├── Core/                  # Application source code (main.c, etc.)
├── Drivers/               # HAL and CMSIS drivers
├── PenduloBot.ioc         # CubeMX project configuration
├── STM32F303K8TX_FLASH.ld # Linker script
└── .gitignore             # Git ignore rules

