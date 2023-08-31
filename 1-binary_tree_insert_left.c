#include "binary_trees.h"

/**
 * binary_tree_insert_left 
 * @parent: Pointer to the node to insert the left-child.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
