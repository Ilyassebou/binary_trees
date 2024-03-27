#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Determines whether a binary tree is perfect.
 * A binary tree is perfect if all non-leaf nodes have exactly two children.
 * @tree: The root node of the tree to check.
 * Return: Returns 1 if tree and all nodes below it each have 2 children,
 * otherwise returns 0. Returns 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		if ((!tree->left->left && !tree->left->right) &&
		    (!tree->right->left && !tree->right->right))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))
		return (1);

	return (0);
}
