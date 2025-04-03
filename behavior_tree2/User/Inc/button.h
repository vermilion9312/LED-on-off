/*
 * button.h
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdbool.h>
#include "main.h"
#include "gpio_config.h"
#include "behavior_tree_config.h"

NodeState is_button_pressed(void*);

#endif /* INC_BUTTON_H_ */
