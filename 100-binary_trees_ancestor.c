#include "binary_trees.h"

/**
 * binary_trees_ancestor -  Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *f, *s;

	for (f = first; f; f = f->parent)
		for (s = second; s; s = s->parent)
			if (f == s)
				return ((binary_tree_t *)f);
	return (NULL);
}
