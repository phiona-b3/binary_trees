#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf = 0;
if (tree == NULL)
	return (0);
if (tree->left)
	leaf += binary_tree_leaves(tree->left)
if (tree->right)
	leaf += binary_tree_leaves(tree->right)
if (!tree->left && !tree->right)
	leaf += 1
return (leaf);
}
