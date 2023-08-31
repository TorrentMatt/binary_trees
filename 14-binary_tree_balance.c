#include "binary_trees.h"

/**
 * recursive_height - Will measures the height of a binary tree
 *
 * @tree: tree root
 * Return: height
 */

size_t recursive_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left = recursive_height(tree->left);
	right = recursive_height(tree->right);
	if (left > right)
	{
		return (left + 1);
	}
	return (right + 1);
}

/**
 * binary_tree_balance - Will measures the balance factor of a binary tree.
 *
 * @tree: root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (balance_height(tree->left) - balance_height(tree->right));
}

/**
 * balance_height -will measures height of a binary tree recursively.
 * @tree: root of the tree to measure.
 * Return: Height.
 */

size_t balance_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_height(tree) - 1);
}
