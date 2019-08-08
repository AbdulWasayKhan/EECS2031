/***************************************
* EECS2031 – Lab 7 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* York #: 214981104
****************************************/


#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printArr(int *, int);

int  main()
{
  char *p;
  int n, i;
  int *my_array;

  /*get Input*/
  printf("Size of array: ");
  scanf("%d", &n);
  my_array = (int *) malloc(n * sizeof(int));

  if (my_array == NULL) {
    printf("Memory allocation failed. Bye!\n");
    exit(0);
  }

   /*Adding values to the array*/
  *my_array = -10;
  for(i =1; i<n; i++)
    *(my_array+i) = i*100;

  /*Printing array*/
  printArr(my_array, n);

   printf("\n");

  p = malloc(6);
  strcpy(p, "hello");
  printf("%s\n", p);
  *(p+2) = 'X';
  printf("%s\n", p);

  return 0;
}

   /*Printing contents of array*/
void printArr(int * arr, int n){
    int i;
    for(i=0; i<n; i++)
    {
        printf("[%d]: %d\n",i, *(arr+i));
    }
}
