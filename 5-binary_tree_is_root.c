#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is root
 * @node: Node to check
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /*If node is NULL, it cannot be a root*/

	return ((node->parent == NULL) ? 1 : 0);
}
