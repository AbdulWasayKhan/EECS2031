/***************************************
* EECS2031 – Lab2 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
****************************************/

#include <stdio.h>
#include<string.h>
/*below is like a constant declared and defined*/
#define MAXIMUM_SIZE 20

int indexOf(char[], char);
int length(char[]);
int isQuit(char []);

int main () {

  char word[MAXIMUM_SIZE];
  char character;
  printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &character);

   /*keep on reading until a word "quit" is read in, followed by any character*/
   while (!isQuit(word))  // != 'quit' does not work
   {
    printf("Input word is \"%s\". Contains %d characters. Index of '%c' in it is %d\n\n", word,length(word),character,  indexOf(word, character));

    printf("Enter a word and a character separated by blank: ");
    scanf("%s %c",word, &character);
  }
}
/*define a function int length(char word[]) which returns the number of characters in
word (excluding the trailing character ‘\0’). This function is similar to strlen(s)*/

int length(char word[]){
  int i;
  for(i=0; word[i]!= '\0'; i++)
    ;
  return i;
}
/*define a function int indexOf(char word[], char c) which returns the index (position of the first occurrence) of c
in word. Return -1 if c does not occur in word. This function is similar to s.indexof()method in Java*/
int indexOf(char word[], char c){
 int i;
 for(i=0; word[i]!= '\0'; i++)
 {
   if(word[i] == c)
     return i;
 }
 return -1;
}

int isQuit (char word[]){

 if (word[0]=='q' && word[1]=='u' && word[2]=='i' && word[3]=='t' && word[4]=='\0')
    return 1;
 else
    return 0;
}

