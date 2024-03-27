#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  Determines whether a binary tree
 *         node is a leaf,indicating it has no children.
 * @node: The node to evaluate.
 *
 * Return: 1 if node is a leaf, 0 otherwise, or if node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
