/***************************************
* EECS2031 – Lab4 *
* Filename: Lab4C.c *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
***************************************/

/*Libraries*/
#include <stdio.h>  // for sprintf
#include <ctype.h>  // for toupper
#include <string.h>
#include <stdlib.h> // for atoi atof
#include <math.h> // for floor ceil

/*Constants*/
#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

     char input[SIZE2];
     char name[SIZE];
     char wage[SIZE];
     char age[SIZE];
     char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];

     printf("Enter name, age and wage (exit to quit): ");
     fgets(input, 40, stdin);
     while (!strcmp("exit", name))
     {
         /*atoi converts the string argument str to an integer (type int).*/
        int ages = atoi(age) + 10;
        /*atof converts the string argument str to a floating-point number (type double).*/
        double wages = atof(wage) * 2;
        /*input, the first letter of name is capitalized,*/
        name[0] = toupper(name[0]);
        sprintf(resu, "%s-%d-%.3f-[%d,%d]", name,ages,wages, (int)floor(wages), (int)ceil(wages));

        /*duplicate/copy resu to resu2*/
        strcpy(resu2,resu);
        /*sprintf() works just like printf() but instead of sending output to console it returns the formatted string.*/
        sprintf(resu3, "%s", resu);
        /* use fgets to read again */
        printf("Enter name, age and wage (exit to quit): ");
        fgets(input, 40, stdin);
     }
}
