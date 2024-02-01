#include "binary_trees.h"

/**
 * binary_tree_balance - a func that
 * Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - a func that
 * Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t node_l = 0, node_r = 0;

		node_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		node_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((node_l > node_r) ? node_l : node_r);
	}
	return (0);
}
