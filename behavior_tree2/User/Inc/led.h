/*
 * led.h
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "behavior_tree_config.h"
#include "main.h"
#include "gpio_config.h"

NodeState turn_off_led(void*);
NodeState turn_on_led(void*);

#endif /* INC_LED_H_ */
