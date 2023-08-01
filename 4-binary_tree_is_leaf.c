#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is a leaf node
 * @node: node to check
 * Return: 1 if leaf node, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left == NULL &&  node->right == NULL);
}
