#include "binary_trees.h"

/**
 * binary_tree_sibling-  function that finds sibling of node
 * @node: pointer to the node to find the sibling
 * Return: If node has no sibling, return NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*If node is NULL or the parent is NULL*/
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
		if (node->parent->left == node && node->parent->right)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node && node->parent->left)
	{
		return (node->parent->left);
	}
		return (NULL);
}
