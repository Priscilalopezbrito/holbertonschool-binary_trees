#include "binary_trees.h"
/**
 * binary_tree_leaves- Counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 * Return:If NULL, the function must return 0
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*If tree is empty, return 0*/
	if(tree == NULL)
	{
		return (0);
	}
	/*If node is leaf with no child*/
	if(tree->left == NULL && tree->right==NULL)
	{
		return (1);
	}
	else
	/*Counting leaves recursively*/
	{
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}

