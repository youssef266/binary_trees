#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		/* delete the left node*/
		binary_tree_delete(tree->left);
		/* delete the right node*/
		binary_tree_delete(tree->right);
		free(tree);
	}
}
