#include "binary_trees.h"
/**
 * binary_tree_nodes- Counts nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree to count number of nodes
 * Return: A NULL pointer is not a node
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}
	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);
	return (count);
}
