/*
 * gpio_config.h
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_GPIO_CONFIG_H_
#define INC_GPIO_CONFIG_H_

#include <stdint.h>
#include "stm32f4xx_hal.h"

typedef struct {
	GPIO_TypeDef* GPIOx;
	uint16_t GPIO_Pin;
} GPIO_Config;

#endif /* INC_GPIO_CONFIG_H_ */
