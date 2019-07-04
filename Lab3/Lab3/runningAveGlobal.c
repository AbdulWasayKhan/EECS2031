/***************************************
* EECS2031 – Lab3 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
#include <math.h>
#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n\n", x,y,z)


void runningAverage();
extern double resu;
extern int count;
extern int sum;


int main(int argc, char *argv[])
{

    int input;

    printf("enter number (-1 to quit):  ");
    scanf("%d", &input);

    while(input != -1)
    {
       count ++;
       sum = sum + input;
       runningAverage();

       MY_PRINT(sum, count, resu);

       /* read again */
       printf("enter number (-1 to quit):  ");
       scanf("%d", &input);

    }
    return 0;
  }

