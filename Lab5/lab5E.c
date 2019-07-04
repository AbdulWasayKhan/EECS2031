/***************************************
* EECS2031 – Lab 5 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x);
void display(int *arr);

 int main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }
     array[count] = -1;   //sentinal token

      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);

     printf("\nLargest value: %d\n", largest(array));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr)
 {
    // int i = 0;
     while ( *arr !=-1) {
         printf("%d", *arr);
         ++arr;
     }
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
     int bg = arr[0];
     //int i = 1;
     
     while ( *arr != -1) {
         //int ax = * (arr+i);
         if (*arr > bg) {
             bg= *arr;
         }
         arr++;
     }
     return bg;
 }
