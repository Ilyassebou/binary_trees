#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: If tree is NULL, returns 0, otherwise returns the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t left, right;

		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		return (1 + left + right);
	}
}
