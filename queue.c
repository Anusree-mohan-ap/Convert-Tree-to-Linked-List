#include "tree.h"

int enqueue(Queue_t **front, Queue_t **rear, Tree_t *data)
{
	Queue_t *new = malloc(sizeof(Queue_t));         // dynamic memory allocation
	if( new == NULL )
	{
		return FAILURE;
	}

	new->node = data;           // updating data in new node
	new->link = NULL;

	if( *rear == NULL )         // if list is empty
	{
		*front = *rear = new;   // updating front and rear
	}
	else    // if list is not empty
	{	
		(*rear)->link = new;    
		(*rear) = new;          // updating rear
	}
	return SUCCESS;
}

Tree_t* dequeue(Queue_t **front, Queue_t **rear)
{
	if( *front == NULL )        // check if queue is empty
	{
		return NULL;
	}

	Tree_t* node;

	if( *front == *rear )       // if there is only one node
	{
		node = (*front)->node;
		free(*front);
		*front = *rear = NULL;
	}
	else
	{
		Queue_t *temp = *front;     // temporary pointer
		node = (*front)->node;
		*front = temp->link;        // updating front
		free(temp);                 
	}
	return node;
}


