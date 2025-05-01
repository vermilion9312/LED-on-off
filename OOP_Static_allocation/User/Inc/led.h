/*
 * led.h
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"
#include "gpio_config.h"

typedef struct _LED LED;

struct _LED {
	GPIO_Config* gpio_config;
	void (* const turn_off)(LED*);
	void (* const turn_on)(LED*);
};

LED* get_led(void);

#endif /* INC_LED_H_ */
