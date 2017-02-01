#ifndef MOTORS_H_
#define MOTORS_H_

typedef enum{
	motor1,
	motor2,
	motor3
} motor;

typedef enum{
	Reverse = -1,
	Forward = 1
} motor_direction;

//Public functions ------------------------------

extern void Motors_init(void);
extern void Motor_PWM(motor m, unsigned int percent_10000);
extern void Motors_Stop(void);
extern void Motor_Speed(motor m, unsigned int percent_10000, motor_direction dir);

//-----------------------------------------------



#endif
