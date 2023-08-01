#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Root Node
 * @func: function pointer to be called for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n); /*Process the current node*/
	/*Recursively traverse the left subtree*/
	binary_tree_preorder(tree->left, func);
	/*Recursively traverse the right subtree*/
	binary_tree_preorder(tree->right, func);
}
