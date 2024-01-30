#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function to insert a node as a lift
 *
 * @parent: a pointer to the node to insert the lift child
 * @value: the value to store in the next new_node
 * Return: null if the parent is null, null if the new_node is null
 *      other wise - a pointer to the new_node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
