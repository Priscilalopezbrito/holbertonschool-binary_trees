#include "binary_trees.h"

int _perfect(const binary_tree_t *tree, int dep, int lev);

size_t _depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
	{
		return (0);
	}
	d = _depth(tree);
	return (_perfect(tree, d, 0));
}

/**
 * _perfect- checks if tree is perfect recursively
 * @tree: pointer
 * @dep: depth
 * @lev: level
 * Return: int
 **/

int _perfect(const binary_tree_t *tree, int dep, int lev)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (dep == lev + 1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (_perfect(tree->left, dep, lev + 1) &&
			_perfect(tree->right, dep, lev + 1));
}

/**
 * _depth- measures the depth of a node in a binary tree
 * @tree:  pointer to the node to measure the depth
 * Return: If tree is NULL, return 0
 **/

size_t _depth(const binary_tree_t *tree)
{
	unsigned int depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
