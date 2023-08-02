#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Root Node
 * Return: the result
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*If either the left or right child is not NULL, it's a non-leaf node.*/
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/*Otherwise, it's a leaf node, so we don't count it*/
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
