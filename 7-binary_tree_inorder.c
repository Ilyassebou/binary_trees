#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverses a tree using in-order
 *        traversal and applies a function to each node.
 * @tree: The binary tree to traverse.
 * @func: A pointer to the function to apply to each node.
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
