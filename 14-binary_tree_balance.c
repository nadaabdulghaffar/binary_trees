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

	leftHeight = binary_tree_height(tree->left) + 1;
	rightHeight = binary_tree_height(tree->right) + 1;

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
