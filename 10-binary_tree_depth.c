#include "binary_trees.h"
/**
 * binary_tree_depth- measures the depth of a node in a binary tree
 * @tree:  pointer to the node to measure the depth
 * Return: If tree is NULL, return 0
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth = 0;
	/*If tree is empty return 0*/
	if (tree == NULL)
	{
		return (0);
	}
	/*Continue while parent is not NULL*/
	while (tree->parent != NULL)
	{
		depth++;/*move up*/
		tree = tree->parent;/*point to parent of the current node*/
	}
	return (depth);
}
