#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of treee
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t level_right = 0;
size_t level_left = 0;

if (tree == NULL)
	return (0);
if (tree->left || tree->right)
	{
		level_left = binary_tree_height(tree->left);
		level_right = binary_tree_height(tree->right);
                return (level_right > level_left ? level_right : level_left);
}
	return (0);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return:  balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

if (tree == NULL)
	return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right);
}
