/***************************************
* EECS2031 – Lab3 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/*declaration of the methods implemented after main*/
int my_atoi (char c[]);
int isQuit (char arr[]);

int main()
{
    int a,b;
    char arr [SIZE];
    printf("Enter a word of positive number or 'quit': ");
    scanf("%s", arr);
    while(!isQuit(arr))
    {
        printf("%s\n", arr);
        /*This function atoi converts an array of digit characters, which represents a decimal integer literal
        into the corresponding decimal integer. e.g given char array "123" internally stored as '1' '2' '3' '\0'
        atoi returns an integer 123 */
        a = atoi(arr);
        printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

        b = my_atoi(arr);
        printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n\n", b,b,b, b*2, b*b);

        /* read again */
        printf("Enter a word of positive number or 'quit': " );
        scanf("%s", arr);
    }
    return 0;
}

    /* convert an array of digit characters into a decimal int */

    /* textbook did scan from left to right.
     Here you should scan from right to left. This is a little complicated but more straightforward */

    int my_atoi (char c[])
    {
        int i, n;
        n = 0;
        for(i = 0; c[i] >= '0' && c[i] <= '9'; i++)
        {
            n = (c[i] - '0') + 10 * n;
        }
        return n;

    }

    int isQuit (char arr[]){

     if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t' && arr[4]=='\0')
        return 1;
     else
        return 0;
    }
