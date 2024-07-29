#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node- function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*allocate memory for new node*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	/*NULL if failure*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;/*parent pointer*/
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);

}
