/***************************************
* EECS2031 – Lab 5 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include<stdio.h>

void processArray(int * c);
void processArray2(int c []);

int main(){
  int arr[] ={2,23,3,5,6,7};
  printf("%p %d\n", arr, sizeof arr / sizeof(int));

  processArray(arr);
  processArray2(arr);

  return 0;
}

void processArray(int * c){
    printf("%p %d\n", c, sizeof(c)/sizeof(int));
}

void processArray2(int c []){
    printf("%p %d\n", c,sizeof(c)/sizeof(int));
}


