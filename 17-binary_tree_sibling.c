#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or Null if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/*
	 * If the node is the left child of its parent,
	 * its sibling is the right child
	 */
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
