#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth
 *
 * Return: Depth of the tree or If tree is NULL,return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		Depth++;
	}

	return (Depth);
}
