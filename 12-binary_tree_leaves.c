#include "binary_trees.h"
/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Leaves = 0;

	if (tree == NULL)
		return (0);

	Leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		Leaves = 1;

	return (Leaves);
}
