
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
    float x =2.35, y=5.64;
    printf("Enter two float numbers separated by ##: %.2f##%.2f\n", x, y);

   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;
}
