/*
 * led.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "led.h"

static void turn_off(LED* this)
{
	HAL_GPIO_WritePin(this->gpio_config->GPIOx, this->gpio_config->GPIO_Pin, GPIO_PIN_SET);
}

static void turn_on(LED* this)
{
	HAL_GPIO_WritePin(this->gpio_config->GPIOx, this->gpio_config->GPIO_Pin, GPIO_PIN_RESET);
}

static GPIO_Config led_config = { LED_GPIO_Port, LED_Pin };

static LED led = { &led_config, turn_off, turn_on };

LED* get_led(void)
{
	return &led;
}

