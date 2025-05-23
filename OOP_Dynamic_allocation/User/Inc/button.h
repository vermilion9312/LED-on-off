/*
 * button.h
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdlib.h>
#include <stdbool.h>
#include "main.h"
#include "gpio_config.h"

typedef struct _Button Button;

struct _Button {
	GPIO_Config* gpio_config;
	bool (* is_pressed)(Button*);
};

Button* new_Button(void);

#endif /* INC_BUTTON_H_ */
