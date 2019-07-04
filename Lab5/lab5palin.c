/***************************************
* EECS2031 – Lab 5 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 40

//the thing is returning true for daD, should not be the case, make program case sensitive

int isPalindrome (char *);
void printReverse (char *);

int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while ( strcmp(arr, "quit\n"))
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);
   
      result = isPalindrome (arr);
      if (result==1) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    
    return 0;
}


int isPalindrome (char * str)
{
    int count = 1;
    int i = 0;
    
    int t = strlen(str) - 1;
    for (i=0; i<strlen(str); ++i) {
        count = count && (str[i] == str[t]);
        t--;
    }
    if (count == 1) {
        return 1;
    } else {
        return 0;
    }
    return 1;
}

// assume the \n was removed manually
void printReverse(char * str){
  int i = strlen(str) -1;
  while ( i >=0 ){
     printf("%c", *(str+i) );  // or  putchar(*(str+i));
     i--;
  }
}
