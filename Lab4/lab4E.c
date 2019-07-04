/***************************************
* EECS2031 – Lab4 *
* Filename: Lab4E.c *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_username: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
int main()
{
    int age = 10;
    int age2 = 100;
    int *ptr;
    /*define an integer pointer variable ptr, and make it point to age*/
    ptr = &age;
    /*display the value of age, both via age (direct access), and via pointer ptr (indirect access).*/
    printf("age: %d %d\n",age,*ptr);

   /* use ptr to change the value of age to 14;*/
    *ptr = 14;
    /*confirm by displaying the value of age, both via age and via its pointer ptr*/
    printf("age: %d %d\n",age,*ptr);

    int *ptr2;
    /*assigned the address of age2 to ptr2 address*/
    ptr2 = &age2;
    /*copy/assign age’s value to age2 via pointer ptr and ptr2;*/
    *ptr2 = *ptr;

    printf("age2: %d %d\n",*ptr2,age2);

    /*ptr2 pointing to age address*/

    ptr2 = ptr;
    printf("ptr2's pointee: %d\n", *ptr2);



    /*use ptr2 to decrease the value of age by 1.*/
    (*ptr2)--;
    /*display value of age, both from age, and via ptr and ptr2.*/
    printf("age: %d %d %d\n",age, *ptr, *ptr2);

    /*finally, display the address of age,*/

    printf("%p %p %p\n",&age,ptr,ptr2);

    return 0;
}
