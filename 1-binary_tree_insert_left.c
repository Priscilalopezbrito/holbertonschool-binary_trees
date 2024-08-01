#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left- inserts node as left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return (NULL);
	}

	left_node->n = value;
	left_node->parent = parent;
	left_node->right = NULL;

	if (parent->left == NULL)
	{
		left_node->left = NULL;
	}
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}

