/***************************************
* EECS2031 – Lab 7 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* York #: 214981104
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;

     setArr(0, 0);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);

     for(i=0; i<5;i++)
         printf("arr[%d] -*-> %d\n", i, *arr[i]);  /* should be 0, 100, 200, 300, 400 */

     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     * arr[index] = i;
}

/* Segmentation Fault occurs because every single pointer was not initilized and contains some garbage value.
   If we try to store info to that garbage address it will cause Segmentation Fault which is C's reaction to protect against this attempt.
   for e.g:
   int * a;
   *a = 5;
 */
