#ifndef MPU6050_H
#define MPU6050_H

#include "stm32f3xx_hal.h"

// I2C handle
extern I2C_HandleTypeDef hi2c1;

// MPU6050 device address
#define MPU6050_ADDR 0x68 << 1 // Shifted for HAL which expects 8-bit address

// MPU6050 Registers
#define MPU6050_REG_PWR_MGMT_1  0x6B
#define MPU6050_REG_ACCEL_XOUT_H 0x3B
#define MPU6050_REG_GYRO_XOUT_H  0x43
#define MPU6050_REG_WHO_AM_I     0x75

typedef struct {

	int16_t Accel_X;
    int16_t Accel_Y;
    int16_t Accel_Z;

    int16_t Gyro_X;
    int16_t Gyro_Y;
    int16_t Gyro_Z;
} MPU6050_Data;

HAL_StatusTypeDef MPU6050_Init(void);
HAL_StatusTypeDef MPU6050_Read_All(MPU6050_Data *data);
uint8_t MPU6050_Read_WhoAmI(void);

#endif
