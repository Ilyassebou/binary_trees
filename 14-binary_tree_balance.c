#include "binary_trees.h"

/**
 * binary_tree_height_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The height of the tree.
 * If tree is NULL, return 0
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_balance(tree->right);

	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: The balance factor of the tree.
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_balance(tree->right);
	return (left - right);
}
