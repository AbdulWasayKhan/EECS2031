/***************************************
* EECS2031 – Lab3 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeap(int year);

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    while(year > 0){

         isLeap(year)?printf("Year %d is a leap year\n\n", year):printf("Year %d is a not leap year\n\n", year);
        printf("Enter a year: ");
        scanf("%d", &year);
    }

    return 0;
}

bool isLeap(int year)
    {
        if ((year % 400) == 0)
            return true;
        else if ((year % 100) == 0)
            return false;
        else if ((year % 4) == 0)
            return true;
        else
            return false;
}
