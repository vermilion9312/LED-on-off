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

LED* new_LED(void)
{
	LED* this = malloc(sizeof(LED));

	this->gpio_config = &led_config;
	this->turn_off    = turn_off;
	this->turn_on     = turn_on;

	return this;
}

