#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return:pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	if (!parent->right)
	{
		newNode = binary_tree_node(parent, value);
		parent->right = newNode;
		return (newNode);
	}

	tmp = parent->right;
	newNode = binary_tree_node(parent, value);
	tmp->parent = newNode;
	newNode->right = tmp;
	parent->right = newNode;
	return (newNode);


}
