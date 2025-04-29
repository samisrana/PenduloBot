#ifndef LQR_H
#define LQR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Updates tilt estimate from raw gyro Y value, returns angle in radians
float estimate_tilt_angle(int16_t gyro_y_raw);

// Calculates the control signal (actuation PWM value)
uint16_t LQR_Controller(float angle_rad, float angular_velocity_rad_s);

#ifdef __cplusplus
}
#endif

#endif // LQR_H
