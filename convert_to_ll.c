#include "tree.h"

void convert_to_ll( Tree_t *root, Slist **head) {
	Queue_t *front = NULL, *rear = NULL;
	
	Tree_t *temp = root;
	while( temp ) {
		// insert the data to linked list
		insert_at_last(head,temp->data);
		// store the left node in the queue
		if( temp->left ) {
			enqueue(&front, &rear, temp->left);
		}
		// store the right node in the queue
		if( temp->right ) {
			enqueue(&front, &rear, temp->right);
		}
		
		temp = dequeue(&front,&rear);
	}
	print_list(*head);
}


