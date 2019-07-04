/***************************************
* EECS2031 – Lab4 *
* Filename: Lab4runningAveLocal2.c *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>

#define MY_PRINT(z)  printf("running average is %.3f\n\n", z)

double r_avg(int);

int main(int argc, char *argv[])
{
   int input;
   printf("enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        double res = r_avg(input);
        MY_PRINT(res);

        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
    }

    return 0;
}

double r_avg(int currentInput)
{
    /*your code here one line*/
    static double sum;
    static double count;
    sum = sum + currentInput;
    count ++;
    double resu = sum/count;
    return resu;

}

