/*
 * button.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "button.h"

static bool is_pressed(Button* this)
{
	return HAL_GPIO_ReadPin(this->gpio_config->GPIOx, this->gpio_config->GPIO_Pin);
}

static GPIO_Config button_config = { BUTTON_GPIO_Port, BUTTON_Pin };

Button* new_Button(void)
{
	Button* this = malloc(sizeof(Button));

	this->gpio_config = &button_config;
	this->is_pressed  = is_pressed;

	return this;
}
