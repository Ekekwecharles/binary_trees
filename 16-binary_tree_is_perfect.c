#include "binary_trees.h"

/**
 *_pow_recursion - calculates the value of x raised to the power of y
 *@x: the base value to exponentiate
 *@y: the power to raise x to
 *Return: x^y, or -1 if y is -ve
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 * Return: size of the tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree or zero if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);
	/*Calculate the height of the left and right subtrees recursively*/

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Description - A binary tree is perfect if all its levels are completely
 * filled, and all the leaf nodes are at the same level. Additionally,
 * for a perfect binary tree, the number of nodes at each level
 * is a power of 2.
 * Return: 1 if its perfect 0 other wise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	/* Check if the tree has only one node (leaf node)*/
	if (!tree->right && !tree->left)
		return (1);

	/*Calculate the height and number of nodes in the tree*/
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}
