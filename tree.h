#ifndef TREE_H
#define TREE_H

#define SUCCESS 0
#define FAILURE -1
#define NOELEMENT -2
#define DUPLICATE -3

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
}Tree_t;

typedef struct node1 
{
	int data;
	struct node1 *link;
}Slist;

typedef struct Que
{
	Tree_t *node;
	struct Que *link;
}Queue_t;

int enqueue(Queue_t **, Queue_t **, Tree_t *);
Tree_t *dequeue(Queue_t **, Queue_t **);
int insert_into_BST(Tree_t **root, int data);
int inorder(Tree_t *);
int insert_at_last(Slist **head, int data);
void print_list(Slist *head);
void convert_to_ll(Tree_t *root, Slist **head);

#endif

