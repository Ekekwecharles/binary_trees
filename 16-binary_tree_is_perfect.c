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
 * binary_tree_is_full - Helper function
 * @tree: Root Node
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the result
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height_l = _height(tree->left);
	size_t height_r = _height(tree->right);

	if (height_l == height_r)
	{
		if (height_l == 0)
			return (1); /*The tree is perfect.*/
		else
			return (binary_tree_is_full(tree) &&
					binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0); /*The tree is not perfect.*/
}
