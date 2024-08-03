#include "binary_trees.h"
/**
 * binary_tree_height- function that measures height of binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, function returns 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int leftHeight, rightHeight;
	/*If tree or l/r leaf is NULL, return 0*/
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	/*Check subtrees recursivly*/
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	/*Return larger*/
	if (leftHeight >= rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}
