#include "binary_trees.h"

/**
 * _height - Helper function to calculate the height of a binary tree
 * @tree: Root Node
 * Return: height
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = _height(tree->left);
	height_r = _height(tree->right);

	return ((height_l > height_r) ? height_l + 1 : height_r + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	/*Calculate the height of the left and right subtrees.*/
	height_l = _height(tree->left);
	height_r = _height(tree->right);

	/*Calculate and return the balance factor.*/
	return ((int)(height_l - height_r));
}
