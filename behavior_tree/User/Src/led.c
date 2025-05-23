/*
 * led.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "led.h"

static GPIO_Config led_config = { LED_GPIO_Port, LED_Pin };

NodeState turn_off_led(void* this)
{
	HAL_GPIO_WritePin(led_config.GPIOx, led_config.GPIO_Pin, GPIO_PIN_SET);

	return NODE_SUCCESS;
}

NodeState turn_on_led(void* this)
{
	HAL_GPIO_WritePin(led_config.GPIOx, led_config.GPIO_Pin, GPIO_PIN_RESET);

	return NODE_SUCCESS;
}
