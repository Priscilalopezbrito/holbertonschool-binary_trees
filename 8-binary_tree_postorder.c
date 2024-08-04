#include "binary_trees.h"

/**
 *binary_tree_postorder - this func traverse the binary tree in post order
 *@tree: pointer to the root node of the tree to traverse.
 *@func: pointer to a func to cheack every node and the value
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, gfunc);
		func(tree->n);
	}
	else
		return;
}
