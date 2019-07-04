//this library is used because we need printf, scanf etc.
#include <stdio.h>
//this library is used because we need ?
#include <stdlib.h>

int main()
{
    int month, day, year;
    printf("Enter month, day and year separated by spaces: ");
    scanf("%d %d %d", &month, &day, &year);

    printf("The input \'%d %d %d\' is reformatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day, year, month, day);

    return 0;
}
