#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Root Node
 * @func: func to be called on each node value
 * Description - In in-order traversal, the left subtree is processed first,
 * then the current node, and finally the right subtree.
 * Process for in-order traversal: Recursively traverse the left subtree, then
 * process the current node, & finally recursively traverse the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
