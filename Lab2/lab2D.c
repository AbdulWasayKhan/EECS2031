/***************************************
* EECS2031 – Lab2 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
****************************************/

#include <stdio.h>
#include<string.h>

/*Counts the number of digits specific*/
int main()
{
      int c,i;
      int count[10];

      for(i=0; i < 10; i++)
      {
          count[i] = 0;
      }

  while((c=getchar()) != EOF){

      if(c >= '0' && c <= '9')
        count[c - '0'] ++;
  }
    for(i=0; i<10; i++)
        printf("\n%d: %d\n", i, count[i]);


  return 0;
}
