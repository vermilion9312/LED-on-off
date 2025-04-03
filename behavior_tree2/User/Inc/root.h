/*
 * root.h
 *
 *  Created on: Apr 2, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_ROOT_H_
#define INC_ROOT_H_

#include "main.h"
#include "gpio_config.h"
#include "behavior_tree_config.h"
#include "button.h"
#include "led.h"

CompositeNode* get_root(void);

#endif /* INC_ROOT_H_ */
