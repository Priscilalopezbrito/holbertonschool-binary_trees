#include "binary_trees.h"

/**
 *binary_tree_inorder - traverse binary tree in order of traverse
 *@tree: pointer to the root of the tree to traverse
 *@func: function pointer to seach each node value to pass to
 *oter node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
	else
		return;
}
