#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree
 *          using pre-order traversal recursively.
 * @tree: The root node of the tree to traverse.
 * @func: A pointer to the function to call for each node;
 *    the value in each node is passed as a parameter to func.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
