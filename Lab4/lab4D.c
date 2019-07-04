/***************************************
* EECS2031 – Lab4 *
* Filename: Lab4D.c *
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
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char wageS[10];
     int columnRow = 0;
    int j;

    printf("Enter name age and wage: ");
    scanf("%s %s  %s", name, ageS, wageS);

    while (strcmp(name, "xxx"))
    {

	   sprintf(inputs_table[columnRow], "%s %s %s", name, ageS, wageS);


        int ages = atoi(ageS) + 10;
        float wages = atof(wageS) * 1.5;


        for (j=0; j < strlen(name); j++) {
            name[j] = toupper(name[j]);
        }


        sprintf(inputs_table[columnRow + 1], "%s %d %.2f", name, ages, wages);

       /* read again using scanf(%s %s %s) */
       printf("Enter name age and wage: ");
       scanf("%s %s %s", name, ageS, wageS);
        columnRow += 2;

    }

     printf("\nRecords generated %s %s %s\n", __FILE__, __DATE__, __TIME__);

    /* now display the input_table row by row */
	  for (j =0; j < columnRow; j++) {
        printf("%s\n", inputs_table[j]);
    }

     return 0;
}
