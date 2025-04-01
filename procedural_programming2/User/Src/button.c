/*
 * button.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "button.h"

static GPIO_Config button_config = { BUTTON_GPIO_Port, BUTTON_Pin };

bool is_button_pressed(void)
{
	return HAL_GPIO_ReadPin(button_config.GPIOx, button_config.GPIO_Pin);
}
