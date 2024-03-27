#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using
 *  post-order traversal recursively and applies a function to each node.
 * @tree: The root node of the tree to traverse.
 * @func:  A pointer to the function to call for each node; the value
 *         in each node is passed as a parameter to func.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
