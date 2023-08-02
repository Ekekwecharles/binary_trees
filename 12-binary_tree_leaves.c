#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Root node
 * Return: num of leaves node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*If both left and right children are NULL, it's a leaf node.*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Recursively count the leaves in the left and right subtrees.*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
