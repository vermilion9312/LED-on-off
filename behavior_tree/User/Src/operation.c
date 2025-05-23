/*
 * operation.c
 *
 *  Created on: Apr 1, 2025
 *      Author: LeeJooHo
 */


#include "operation.h"

static LeafNode button_condition  = { is_button_pressed };
static LeafNode led_off_action    = { turn_off_led      };
static LeafNode led_on_action     = { turn_on_led       };

static void* sequence_children[] = { &button_condition, &led_on_action };
static CompositeNode sequence = { run_sequence, sequence_children, 2 };

static void* selector_children[] = { &sequence, &led_off_action };
static CompositeNode root = { run_selector, selector_children, 2 };


CompositeNode* get_root(void)
{
	return &root;
}

