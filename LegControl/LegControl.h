#ifndef LEGCONTROL_H
#define LEGCONTROL_H

#include <Arduino.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

// Joint channel mappings
#define KNEE_JOINT 2
#define HIP_LEG_JOINT    1
#define HIP_BODY_JOINT   0


#define NUM_LEGS 4
#define NUM_JOINTS 3

#define LEG_1 0
#define LEG_2 1
#define LEG_3 2
#define LEG_4 3

// Joint Pulse Limits
#define PULSE_MIN        100 // 0 DEGREES
#define PULSE_MAX        530 // 180 DEGREES


// Joint Angle Limits
#define KNEE_JOINT_ANGLE_MIN        30
#define KNEE_JOINT_ANGLE_MAX        180

#define HIP_LEG_JOINT_ANGLE_MIN     -150
#define HIP_LEG_JOINT_ANGLE_MAX     30    

#define HIP_BODY_JOINT_ANGLE_MIN    -20
#define HIP_BODY_JOINT_ANGLE_MAX    20

void initializeLeg();
void moveLeg(int leg, int joint, int angle);

#endif
