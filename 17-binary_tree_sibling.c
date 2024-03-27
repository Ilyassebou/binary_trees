#include "binary_trees.h"

/**
 * binary_tree_sibling - Locates the sibling node of a given node.
 *@node: A pointer to the node whose sibling is to be found.
 * Return: A pointer to the sibling node, if found; otherwise NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
