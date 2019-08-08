/***************************************
* EECS2031 – Lab 7 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* York #: 214981104
****************************************/

#include <stdio.h>
#include <stdlib.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
    int i;

    setArr(0,0);
    setArr(1,100);
    setArr(2,200);
    setArr(3,300);
    setArr(4,400);

    for(i=0; i<5;i++)
        printf("arr[%d] -*-> %d\n", i, *arr[i]);  /* should be 0, 100, 200, 300, 400 */

    return 0;
}

void setArr(int index, int value){
    int b = value;
    arr[index] = (int *) malloc(sizeof(int));  //request space in heap
    *arr[index] = b;    //set the pointee value
}
