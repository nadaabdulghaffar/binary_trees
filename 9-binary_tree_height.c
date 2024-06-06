#include "binary_trees.h"
/**
 * binary_tree_height- A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The height of a binary tree, If tree is NULL,return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_height(tree->left);

	if (tree->right)
		rightHeight = binary_tree_height(tree->right);

	return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
}
