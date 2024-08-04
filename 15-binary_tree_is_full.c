#include "binary_trees.h"
/**
 * binary_tree_is_full- checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
:x
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*Null tree not full*/
	if (tree == NULL)
	{
		return (0);
	}
	/*node with no child is full*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*if tree has left and right check subtrees*/
	if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	/*If just one child, not full*/
	return (0);
}
