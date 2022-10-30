/*
 * software_timer.h
 *
 *  Created on: Oct 29, 2022
 *      Author: WELCOME
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int timer0_flag;
int timer1_flag;
int timer2_flag;
int timer3_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
