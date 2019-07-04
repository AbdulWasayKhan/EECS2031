/***************************************
* EECS2031 – Lab 5 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include <stdio.h>
#include <string.h>

void sortArr(char *c);

int main()
{
   int result;  char c; int i;  int count=0;
   char arr[30];
   fgets(arr,30,stdin);
   while (strcmp(arr,"quit\n"))
   {
       arr[strlen(arr)-1] = '\0'; // remove the trailing \n

       sortArr(arr);
       printf("%s\n\n", arr);

       fgets(arr,30,stdin);

    }
   return 0;
}

/*  selection sort */
void sortArr(char * c)
{
   int n = strlen(c);
   int i;


   for (i=0; i<n-1; i++){
        int j;
        int minPos=i;
     for (j=i+1; j<n; j++){

         if (*(c+j) < *(c+minPos)){
           minPos = j;
         }
     }
     // swapping
     char tmp = *(c+i);
     *(c+i) = *(c+minPos);
     *(c+minPos) = tmp;

    }
}
