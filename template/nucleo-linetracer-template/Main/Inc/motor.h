/*
 * motor.h
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

void Motor_Start();
void Motor_Stop();

void Motor_Test_Velocity();
void Motor_Test_Phase();
void Motor_L_TIM3_IRQ();
void Motor_R_TIM4_IRQ();

#endif /* INC_MOTOR_H_ */
