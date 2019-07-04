/***************************************
* EECS2031 Lab1 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
****************************************/

#include <stdio.h>

/* program that counts only visible characters, i.e., new line character is not counted.*/

int main(){
    char c;
    int countChar, lC;
    countChar=lC=0;
    /*getchar() reads characters from Standard input (stdin),
    which by default is the keyboard.*/
    c = getchar();


    /*getchar() returns EOF (which is a special negative number defined in C)
     when the “end of file” is reached. If the program reads from a text file (redirected using < ),
    then the end of the text file is “end of file”; If the program reads from Standard in (i.e., keyboard)
     then in Windows, it is ctrl Zindicates “end of file”*/
  while( c != EOF)
  {
      if(c == '\n')
        lC++;


        else
            countChar++;
            c =  getchar();  /* read character again */
  }
  printf("# of chars: %d\n", countChar);
  printf("# of lines: %d\n", lC);

}

