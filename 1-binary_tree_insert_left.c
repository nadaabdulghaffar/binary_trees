#include "binary_trees.h"
/**
 * binary_tree_insert_left- Insert a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return:pointer to the created node, or NULL on failure or if parent is NULL
*/

	binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
	{
		binary_tree_t *newNode = NULL;
		binary_tree_t *tmp = NULL;

		if (parent == NULL)
			return (NULL);

		if (!parent->left)
		{
			newNode = binary_tree_node(parent, value);
			parent->left = newNode;
			return (newNode);
		}

		tmp = parent->left;
		newNode = binary_tree_node(parent, value);
		tmp->parent = newNode;
		newNode->left = tmp;
		parent->left = newNode;
		return (newNode);
}
