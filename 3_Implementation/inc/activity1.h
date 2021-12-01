#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file activity1.h
 * @author anoop
 * @brief activity1
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>

/**
 * @brief initialise registers
 * 
 */
void peripheral_init();

/**
 * @brief && 2 buttons and proceed if both are on
 * 
 * @return uint16_t 
 */
uint16_t buttons();


#endif /* __ACTIVITY_1_H__ */