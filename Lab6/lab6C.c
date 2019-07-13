/***************************************
* EECS2031 – Lab 6 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 8

void printArr(char *[], int );
void printArrP(char **, int );
void exchange(char *[]);

/*
Store strings using Array of (char) Pointers. Pass array of pointers
to functions. Swap records of pointer arrays.

Write an ANSI-C program that reorders the pointees of a pointer array.
*/

main(){

  char * inputs[SIZE] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  printf("sizeof char*: %d, sizeof inputs: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printArr

   printArr(inputs, 8);

  // swap pointee of first and second element pointers

  char * tmp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = tmp;

  // call exchange() to swap some other 'rows';

  exchange(inputs);

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // display the swapped array by calling printArr()

  printArr(inputs, 8);

  // display the swapped array again by calling printArrP()

  printArrP(inputs, 8);

}

void printArr(char *p[], int n){
  int i;
  for (i=0;i<n ;i++ )
  {
     printf("[%d] -*-> %s\n", i, *(p+i));

  }
  printf("\n");
}

void printArrP(char **p, int n){
  int i;
  for (i=0;i<n ;i++ )
  {
     printf("[%d] -*-> %s\n", i, *(p+i));
  }
}

void exchange(char *p[])
{
  // exchange pointers (addresses)
  char * tmp = p[2];
  p[2] = p[3];
  p[3] = tmp;

  tmp = p[4];
  p[4] = p[5];
  p[5] = tmp;
}



