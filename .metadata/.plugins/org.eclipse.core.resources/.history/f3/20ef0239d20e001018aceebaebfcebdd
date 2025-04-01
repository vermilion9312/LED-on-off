/*
 * led.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "led.h"

static GPIO_Config led_config = { LED_GPIO_Port, LED_Pin };

void turn_off_led(void)
{
	HAL_GPIO_WritePin(led_config.GPIOx, led_config.GPIO_Pin, GPIO_PIN_SET);
}

void turn_on_led(void)
{
	HAL_GPIO_WritePin(led_config.GPIOx, led_config.GPIO_Pin, GPIO_PIN_RESET);
}
