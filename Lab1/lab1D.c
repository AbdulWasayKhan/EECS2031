
/***************************************
* EECS2031 Lab1 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
****************************************/

#include <stdio.h>

//function declaration
float sum(float, float);

int main()
{
    int count,i;
    printf("Enter the number of interactions: ");
    scanf("%d", &count);
    for(i = 0; i <count; i++)
        {
        float x, y;
        printf("Enter two float numbers separated by ##: ");
        scanf("%f ## %f", &x, &y);
        float su= sum(x,y);
        printf( "%f + %f = %f\n", x,y, su);
        }
        return 0;
    }


/* function definition */
float sum (float i, float j){
   return i+j;
}
