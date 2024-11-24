#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
	// allocating memory for the new node
	Tree_t *new = malloc(sizeof(Tree_t));
	if( new == NULL )
		return FAILURE;

	// updating all fields
	new->data = data;
	new->left = NULL;
	new->right = NULL;

	if( *root == NULL )
	{
		*root = new;
		return SUCCESS;
	}

	Tree_t *temp = *root;
	Tree_t *parent;
	int flag;

	// iterate through the tree
	while( temp != NULL )
	{
		parent = temp;
		if( data < temp->data )
		{
			temp = temp->left;
			flag = 1;
		}
		else if( data > temp->data )
		{
			temp = temp->right;
			flag = 0;
		}
		else
			return DUPLICATE;
	}

	// insert the new node in the tree
	if( flag == 1 )
	{
		parent->left = new;
	}
	else
	{
		parent->right = new;
	}
	return SUCCESS;
}

/* Function to print the data in in order printing */
int inorder(Tree_t *root)
{
	/* If the root is not equal to NULL */
	if (root != NULL)
	{
		/* Calling the function recursively  */
		inorder(root -> left);

		/* Printing the data */
		printf("%d ", root -> data);

		/* Calling the function recursively  */
		inorder(root -> right);
	}
}
