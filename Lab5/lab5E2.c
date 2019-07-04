/***************************************
* EECS2031 – Lab 5 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20


int largest(int * x, int);
void display(int *arr, int);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;

     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, count);



     printf("\nLargest value: %d\n\n", largest(array, count));

     return 0;
 }

 /* display a int array */

 void display(int *arr, int lengthInfo)
 {
     int i = 0;
     while( i < lengthInfo)
     {
          printf("%d ", *(arr + i));
          i++;
     }

 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr, int lengthInfo)
 {
     //element in an array
     int largest = *arr;
     int i = 1;
     while(i < lengthInfo)
     {
         int x = * (arr + i);
         if(x > largest)
             largest = x;
         i++;
     }
     //else return the largest
     return largest;
 }

