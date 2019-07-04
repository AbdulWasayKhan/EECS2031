/***************************************
* EECS2031 – Lab4 *
* Filename: Lab4D2.c *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     char name[10];
     char ageS[10]; char wageS[10];
     int row = 0;
     printf("Enter name, age and wage: ");
     fgets(input_table[row], 30, stdin);
     int age,i;
     float wage;

     while(1)
     {
	 /* need to 'tokenize' the read in line*/
        sscanf(input_table[row], "%s %d %f", name, &age, &wage);
        if(!strcmp(name,"xxx"))
        {
            break;
        }
        age =+ 10;
        wage = wage * 1.5;

         for (i=0; i < strlen(name); i++) {
             name[i] = toupper(name[i]);
         }
         sprintf(input_table[row + 1], "%s %d %.2f", name, age, wage);
         row += 2;

          // read again using fgets()
         printf("Enter name, age and wage: ");
         fgets(input_table[row], 30, stdin);
     }

     printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
	    for (i =0; i < row; i++) {
        printf("%s\n", input_table[i]);
    }

     return 0;
}



