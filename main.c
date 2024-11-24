/*
Name : Anusree Mohan
Title : To convert a tree to a single linked list
 */
#include "tree.h"

int main()
{
	Tree_t *root = NULL;
	Slist *head = NULL;
	int option,data,ret;

	printf("\t1. Insert tree\n\t2. Print Tree\n\t3. Convert to LL\n\t4. Exit\n");

	while(1) {

		printf("Select option : ");
		scanf("%d",&option);
		switch(option) {
			case 1: 
				{
					// to insert elements to the tree
					printf("Enter the element : ");
					scanf("%d",&data);

					if( (ret = insert_into_BST(&root,data)) == DUPLICATE) {
						printf("INFO : duplicate found\n");
					} else if( ret == FAILURE ) {
						printf("Insertion failed");
					}
					break;
				}
			case 2:
				{
					// displaying the tree in inorder
					if( root == NULL ) {
						printf("Tree is Empty\n");
					} else {
						printf("Displaying the tree : \n");
						inorder(root);
						printf("\n");
					}
					break;
				}
			case 3:
				{
					// to convert the linked list
					if( root == NULL ) {
						printf("Tree is Empty\n");
					} else {						
						printf("The linked list is :\n");
						convert_to_ll(root,&head);
					}
					break;
				}
			case 4:
				{
					return 0;
				}
			default:
				{
					printf("Invalid option\n");
				}
		}
	}
	return 0;
}


