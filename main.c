#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point for testing the binary_tree_node function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	binary_tree_t *child;

	root = binary_tree_node(NULL, 98);
	if (root)
		printf("Root node created with value: %d\n", root->n);
	else
		printf("Failed to create root node\n");

	child = binary_tree_node(root, 42);
	if (child)
		printf("Child node created with value: %d\n", child->n);
	else
		printf("Failed to create child node\n");

	return (0);
}
