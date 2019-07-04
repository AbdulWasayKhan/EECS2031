/***************************************
* EECS2031 – Lab4 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
#define SIZE 10

extern int x,y; // declare gloal variables, which are defined somewhere else
void func1();  // declare function, which are defined somewhere else


void aFun(void); // declare function, which is defined later in this file

int main(int argc, char *argv[])
{
    printf("%d %d\n", x,y);

    y=10;
    func1();
    printf("%d %d\n", x,y);

    int k;
    for(k=0; k<SIZE; k++)
       aFun();

 /*   printf("counter: %d\n", counter);*/
    return 0;
}

void aFun(void){
    /*By using static variables in a function Observe that the value of counter is different in each call and
    its value are maintained during function calls. when the static variables or global variables are not initialized
    the initial value is 0 assigned to the variable. For local variable there will some garbage value assigned to it.*/

    static int counter;
    int a;
    printf("aFun() called, counter is %d, a is %d\n", counter, a);

    counter +=10;

 }
