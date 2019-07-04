
/***************************************
* EECS2031 Lab1 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
****************************************/

#include <stdio.h>

#include <stdio.h>

/*copy.c: copy the user input to output */

int main(){
    /*getchar() reads characters from Standard input (stdin),
    which by default is the keyboard. But the input can be redirected
    from an input file using < filename. In the latter case getchar()
    will read from the input file instead.*/
  int c = getchar();


    /*getchar() returns EOF (which is a special negative number defined in C)
     when the “end of file” is reached. If the program reads from a text file (redirected using < ),
    then the end of the text file is “end of file”; If the program reads from Standard in (i.e., keyboard)
    , then in Unix, ctrl D indicates “end of file” (in Windows, it is ctrl Z )*/
  while( c != EOF)
  {
    putchar(c);
   // or printf("%c", c);

    c =  getchar();  /* read again */
  }

  return 0;

}
