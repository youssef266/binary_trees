#include "binary_trees.h"

/**
 * binary_tree_uncle - a func that Finds the uncle of a node
 * in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
    {
	    if(node->parent == NULL)
        {
	        if(node->parent->parent == NULL)
            {
                return (NULL);
            }

        }
    }
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
