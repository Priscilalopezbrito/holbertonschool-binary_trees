#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle- finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: If node has no uncle, return NULL
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}
	/*Return sibling of node parent*/
	return (binary_tree_sibling(node->parent));
}

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
	return (NULL);
}
