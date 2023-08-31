
/**
 * binary_tree_is_leaf - Checks if a node
 * @node: Pointer to the node to check.
 * Return: Return 1 if node is a leaf, if not 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
