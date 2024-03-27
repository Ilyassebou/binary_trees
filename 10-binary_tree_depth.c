#include "binary_trees.h"

/**
 * binary_tree_depth -  Determines the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth from.
 * Return:  If tree is NULL, returns 0, otherwise returns the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
