/*
 * root.c
 *
 *  Created on: Apr 2, 2025
 *      Author: LeeJooHo
 */


#include "root.h"

static GPIO_Config button_1_config = { BUTTON_1_GPIO_Port, BUTTON_1_Pin };
static GPIO_Config button_2_config = { BUTTON_2_GPIO_Port, BUTTON_2_Pin };
static GPIO_Config button_3_config = { BUTTON_3_GPIO_Port, BUTTON_3_Pin };
static GPIO_Config button_4_config = { BUTTON_4_GPIO_Port, BUTTON_4_Pin };

static GPIO_Config left_red_config   = { LEFT_RED_GPIO_Port,   LEFT_RED_Pin   };
static GPIO_Config left_green_config = { LEFT_GREEN_GPIO_Port, LEFT_GREEN_Pin };
static GPIO_Config left_blue_config  = { LEFT_BLUE_GPIO_Port,  LEFT_BLUE_Pin  };

static GPIO_Config right_red_config   = { RIGHT_RED_GPIO_Port,   RIGHT_RED_Pin   };
static GPIO_Config right_green_config = { RIGHT_GREEN_GPIO_Port, RIGHT_GREEN_Pin };
static GPIO_Config right_blue_config  = { RIGHT_BLUE_GPIO_Port,  RIGHT_BLUE_Pin  };

static LeafNode button_1_condition = { is_button_pressed, &button_1_config };
static LeafNode button_2_condition = { is_button_pressed, &button_2_config };
static LeafNode button_3_condition = { is_button_pressed, &button_3_config };
static LeafNode button_4_condition = { is_button_pressed, &button_4_config };

static LeafNode left_red_off_action   = { turn_off_led, &left_red_config   };
static LeafNode left_green_off_action = { turn_off_led, &left_green_config };
static LeafNode left_blue_off_action  = { turn_off_led, &left_blue_config  };

static LeafNode right_red_off_action   = { turn_off_led, &right_red_config   };
static LeafNode right_green_off_action = { turn_off_led, &right_green_config };
static LeafNode right_blue_off_action  = { turn_off_led, &right_blue_config  };

static LeafNode left_red_on_action   = { turn_on_led, &left_red_config   };
static LeafNode left_green_on_action = { turn_on_led, &left_green_config };
static LeafNode left_blue_on_action  = { turn_on_led, &left_blue_config  };

static LeafNode right_red_on_action   = { turn_on_led, &right_red_config   };
static LeafNode right_green_on_action = { turn_on_led, &right_green_config };
static LeafNode right_blue_on_action  = { turn_on_led, &right_blue_config  };

static void* left_red_sequence_children[] = { &button_1_condition, &left_red_on_action };
static CompositeNode left_red_sequence = { run_sequence, left_red_sequence_children, 2};

static void* left_red_selector_children[] = { &left_red_sequence, &left_red_off_action };
static CompositeNode left_red_selector = { run_selector, left_red_selector_children, 2 };

static void* left_green_sequence_children[] = { &button_2_condition, &left_green_on_action };
static CompositeNode left_green_sequence = { run_sequence, left_green_sequence_children, 2};

static void* left_green_selector_children[] = { &left_green_sequence, &left_green_off_action };
static CompositeNode left_green_selector = { run_selector, left_green_selector_children, 2 };

static void* left_blue_sequence_children[] = { &button_3_condition, &left_blue_on_action };
static CompositeNode left_blue_sequence = { run_sequence, left_blue_sequence_children, 2};

static void* left_blue_selector_children[] = { &left_blue_sequence, &left_blue_off_action };
static CompositeNode left_blue_selector = { run_selector, left_blue_selector_children, 2 };

static void* right_red_sequence_children[] = { &button_4_condition, &right_red_on_action };
static CompositeNode right_red_sequence = { run_sequence, right_red_sequence_children, 2};

static void* right_red_selector_children[] = { &right_red_sequence, &right_red_off_action };
static CompositeNode right_red_selector = { run_selector, right_red_selector_children, 2 };

static void* root_children[] = {
		&left_green_selector,
		&left_red_selector,
		&left_blue_selector,
		&right_red_selector
};

static CompositeNode root = { run_sequence, root_children, 4 };


CompositeNode* get_root(void)
{
	return &root;
}

