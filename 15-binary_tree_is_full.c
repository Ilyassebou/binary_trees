#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines whether a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: Returns 1 if the tree is full, otherwise returns 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}