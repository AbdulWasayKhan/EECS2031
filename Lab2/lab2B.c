/***************************************
* EECS2031 – Lab2 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
****************************************/
#include <stdio.h>
#include <stdlib.h>

/*For each input character that is a lower-case letter,
converts it into the corresponding upper case letter in the output*/
int main()
{
      int c;

  while((c=getchar()) != EOF)
  {
      if(c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
    putchar(c);
  }
  return 0;
}
