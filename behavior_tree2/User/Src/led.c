/*
 * led.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "led.h"

NodeState turn_off_led(void* _node)
{
	LeafNode* node = (LeafNode*) _node;
	GPIO_Config* gpio_config = (GPIO_Config*) node->data;
	HAL_GPIO_WritePin(gpio_config->GPIOx, gpio_config->GPIO_Pin, GPIO_PIN_SET);

	return NODE_SUCCESS;
}

NodeState turn_on_led(void* _node)
{
	LeafNode* node = (LeafNode*) _node;
	GPIO_Config* gpio_config = (GPIO_Config*) node->data;
	HAL_GPIO_WritePin(gpio_config->GPIOx, gpio_config->GPIO_Pin, GPIO_PIN_RESET);

	return NODE_SUCCESS;
}
