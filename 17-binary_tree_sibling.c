#include "binary_trees.h"

/**
 * binary_tree_sibling-  function that finds sibling of node
 * @node: pointer to the node to find the sibling
 * Return: If node has no sibling, return NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	/*If node is NULL or the parent is NULL*/
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
		if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}
	else
		return (NULL);
}
