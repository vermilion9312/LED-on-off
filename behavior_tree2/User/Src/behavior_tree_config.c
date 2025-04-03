/*
 * behavior_tree_config.c
 *
 *  Created on: Apr 2, 2025
 *      Author: LeeJooHo
 */


#include "behavior_tree_config.h"

NodeState run_sequence(void* this)
{
	CompositeNode* node = (CompositeNode*)this;
	for (size_t i = 0; i < node->count; i++)
	{
		Tick tick = ((LeafNode*)node->children[i])->tick;
		if (tick(node->children[i]) == NODE_FAILURE)
			return NODE_FAILURE;
	}
	return NODE_SUCCESS;
}

NodeState run_selector(void* this)
{
	CompositeNode* node = (CompositeNode*)this;
	for (size_t i = 0; i < node->count; i++)
	{
		Tick tick = ((LeafNode*)node->children[i])->tick;
		if (tick(node->children[i]) == NODE_SUCCESS)
			return NODE_SUCCESS;
	}
	return NODE_FAILURE;
}
