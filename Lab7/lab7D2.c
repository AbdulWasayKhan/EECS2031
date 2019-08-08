/***************************************
* EECS2031 – Lab 7 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* York #: 214981104
****************************************/


#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);

struct node {
    int data;
    struct node * next;
};

struct node * head;

int main()
{
    head = NULL;

    insertBegining(100);
    insertBegining(200);
    insertBegining(300);
    insertBegining(400);
    insertBegining(500);

    int i;
    struct node * cur;
    printf("%d\n", lengt());
    for(cur= head; cur != NULL; cur= cur->next)
        printf("%d ", cur->data);
    printf("\n");
}

//check this again
void insertBegining(int dat){
//    struct node newNode;
//    newNode.data = dat;
//
//    newNode.next = head;
//    head = &newNode;

    struct node * newN;     //point the next head node
    newN = malloc(sizeof(struct node));

    newN -> data = dat;     //  gets the member data from the struct that foo points to.
    newN -> next = head;
    head = newN;
}


int lengt()
{
    int numb = 0;
    struct node * a;
    a = head;
    while(a != NULL){
        numb ++;
        a = a -> next;
    }
    return numb;
}
/*
 Since we are not using malloc to store a reference to that value,
 the value gets lost as it's not stored in the heap, It's stored on the stack after "insertBegining"
 method finishes running. Hence we are trying to access memory that we don't have the access to.
 We "Segmentation fault (core dumped)" error occurs when our code tries to read a location in he memory that is already freed.
 This error is explained in the textbook, as an error
 indicating memory coruption and also above explained.
 */

