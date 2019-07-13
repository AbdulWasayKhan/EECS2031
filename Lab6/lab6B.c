/***************************************
* EECS2031 – Lab 6 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 30

void exchange(char c[][50]);
void printArray(char c[][50], int);



/*
    Similarities and differences between 2D char array and array of
    char pointers, both of which can be used to store rows of input
    strings.

    Write an ANSI-C program that uses 2D array to read and store user
    input strings line by line, until a line of xxx is entered (similar to lab4).
    The program then reorders the rows of inputs.
    */
main()
{
    int current_row = 0;
    char inputs[MAXLINES][50];

    printf("sizeof inputs: %d\n\n", sizeof(inputs));
    printf("Enter string: ");
    /*To read in a line into the table row directly.
    Note that a trailing \n is also read in. We used fgets*/
    fgets(inputs[current_row], 50, stdin);

    while(strcmp("xxx\n", inputs[current_row]) != 0)
    {
        current_row ++;

        printf("Enter string: ");
        fgets(inputs[current_row], 50, stdin);
    }
    printf("\n");
    printArray(inputs, current_row);

    char tmp[50];
    strcpy(tmp,inputs[0]);
    strcpy(inputs[0],inputs[1]);
    strcpy(inputs[1], tmp);

    //printf("%d: This is input %d", current_row, inputs);

    exchange(inputs);

    printf("\n== after swapping ==\n");
    printArray(inputs, current_row);

    return 0;

}

 void exchange(char c[][50])
 {
     char tmp[50];
     strcpy(tmp,c[2]);
     strcpy(c[2],c[3]);
     strcpy(c[3], tmp);

     strcpy(tmp,c[4]);
     strcpy(c[4],c[5]);
     strcpy(c[5], tmp);
 }

 void printArray(char c[][50], int n)
 {
     int i;

     for (i = 0; i < n; i++)
        printf("[%d]: %s", i, c[i]);
 }

 /*
change the formal argument in one of the function definitions
(and the corresponding declaration) from char[][50] to char [][],
for example, void exchange(char[][]), and compile.
    What do you get?
    Ans). We got error which says that array type has incomplete element
    type char[].
 */
