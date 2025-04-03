/*
 * button.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "button.h"


NodeState is_button_pressed(void* _node)
{
	LeafNode* node = (LeafNode*) _node;
	GPIO_Config* gpio_config = (GPIO_Config*) node->data;

	return HAL_GPIO_ReadPin(gpio_config->GPIOx, gpio_config->GPIO_Pin) ? NODE_SUCCESS : NODE_FAILURE;
}
