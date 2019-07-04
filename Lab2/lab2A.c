/***************************************
* EECS2031 – Lab2 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
****************************************/
#include <stdio.h>
#include <stdlib.h>

int isDigits(char);

int main()
{
    int a;
    char c;
    printf("Enter an integer and a character separated by blank>");
    scanf("%d %c", &a,&c);
    while(a != -10000){
            if(isDigits(c))
                printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", c,a,c,a+c-'0');
            else
                printf("Character '%c' does not represent a digit\n",c);

                printf("\nEnter an integer and a character separated by blank>" );
                scanf("%d %c", &a,&c);
    }
    return 0;
}

int isDigits(char c)
    {
        if(c >= '0' && c <= '9')
            return 1;
        else
            return 0;
}
