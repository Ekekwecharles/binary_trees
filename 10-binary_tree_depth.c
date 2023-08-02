#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Description - It starts from the provided tree pointer and traverses
 * up the tree through its parent pointers until it reaches the
 * root (a node with no parent)
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}

