#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a tree is full
 * @tree: Root Node
 * Return: 1 if full and 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*If the tree is NULL, there's no tree to check, so it's not full.*/
	if (tree == NULL)
		return (0);

	/*
	 * If the current node has no children, it satisfies
	 * the condition for a full binary tree.
	 */
	if (!tree->right && !tree->left)
		return (1);

	/*
	 * If the current node has both left and right children,
	 * recursively check the subtrees
	 */
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/*If the current node has only one child, it's not full.*/
	return (0);
}
