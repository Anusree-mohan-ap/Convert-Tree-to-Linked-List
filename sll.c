#include "tree.h"

int insert_at_last(Slist **head, int data)
{
	Slist *new = malloc(sizeof(Slist));		// dynamic memory allocation

	if( new == NULL )		// error checking
	{
		return FAILURE;
	}

	// updating data
	new->data = data;
	new->link = NULL;

	if( *head == NULL )		// if list is empty
	{
		*head = new;
		return SUCCESS;
	}
	else					// if list is not empty
	{
		Slist *temp = *head;
		while( temp->link != NULL )
		{
			temp = temp->link;
		}
		temp->link = new;
		return SUCCESS;
	}
}

void print_list(Slist *head)
{
	if (head == NULL)
	{
		printf("INFO : List is empty\n");
	}
	else
	{
		while (head)		
		{
			printf("%d -> ", head -> data);
			head = head -> link;
		}

		printf("NULL\n");
	}
}


