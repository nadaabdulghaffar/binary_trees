#include "binary_trees.h"
/**
 * binary_tree_node():function that creates a binary tree node
 * @parent:a pointer to the parent node of the node to create
 * @value:the value of the new node
 * Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	return (newNode);
}
