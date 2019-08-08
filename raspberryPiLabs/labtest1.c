/*
* Syed Shah
* 213927942
* This is my code for Q2. I tried to use the tester for this code but I was not
* getting any output.
*/
#include <stdio.h>
#include <stdlib.h>
#include "llist.h"
static struct node *head;
static struct node *allocNode()
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	if(n == (struct node *)NULL) {
		fprintf(stderr,"out of memory in allocNode\n");
		exit(1);
	}
	n->next = (struct node *)NULL;
	return n;
}
void dumpList()
{
	struct node *p = head;
	while(p!=(struct node *)NULL) {
		printf("%d\n", p->v);
		p = p->next;
	}
}
void createList()
{
	head = (struct node *)NULL;
}
void pushValue(int v)
{
	struct node *n = allocNode();
	n->v = v;
	n->next = head;
}
int isEmpty()
{
	if(head == (struct node*)NULL)
		return 1;
	else
		return 0;
}
int popValue()
{
	int v;
	v = head->v;
	head = head->next;
	return v;
}