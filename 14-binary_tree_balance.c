#include "binary_trees.h"
/**
 * 
 * 
 * 
*/
int binary_tree_balance(const binary_tree_t *tree) {
    int left_height, right_height;

    if (tree == NULL) {
        return 0;
    }

    left_height = tree_height(tree->left);
    right_height = tree_height(tree->right);

    return (left_height - right_height);
}


/**
 * 
 * 
 * 
*/
int tree_height(const binary_tree_t *tree) {
    int left_height, right_height;
    
    if (tree == NULL) {
        return 0;
    }

    left_height = tree_height(tree->left);
    right_height = tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}
