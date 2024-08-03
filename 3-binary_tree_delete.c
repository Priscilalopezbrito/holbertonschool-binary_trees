#include "binary_trees.h"

/**
 *binary_tree_delete - delete the tree by traverseing it
 *@tree: is the root
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
<<<<<<< HEAD
=======
		return;
>>>>>>> 4c71b2bfa836ad5444d160777e914d71f592e96a
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

<<<<<<< HEAD

=======
>>>>>>> 4c71b2bfa836ad5444d160777e914d71f592e96a
