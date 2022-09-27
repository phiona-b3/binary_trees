#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && node->left == NULL && node->right == NULL)
	return (1);
return (0);
}

/**
 * binary_tree_height - Height
 * @tree: Root
 *
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t levelr = 0, levell = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		levell = binary_tree_height(tree->left);
		levelr = binary_tree_height(tree->right);
		return (1 + (levelr > levell ? levelr : levell));
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
