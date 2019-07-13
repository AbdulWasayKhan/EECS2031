/***************************************
* EECS2031 – Lab 6 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* eecs_num: awkhan94 *
* Yorku #: 214981104
****************************************/

#include <stdio.h>

int getSum (char*[], int);
int getSumP(char **, int);

int main(int argc, char *argv[])
{

        printf("There are %d arguments (excluding \"%s\") \n", argc-1, argv[0]);
        int i;
        for (i=1;i < argc; i++)
        {
           printf("%s ", argv[i]);
           if (i != argc -1) //printf("= ");
           //else
             printf("+ ");
        }

        printf("\n= %d\n", getSum(argv, argc-1));
        printf("= %d\n\n", getSumP(argv, argc-1));
        return 0;


}


int getSumP(char ** arr, int n)
{
        int i; int sum = 0;

        for (i=1;i <= n; i++)
	{

           sum += atoi( *(arr+i) );  //  atoi(arr[i])
	}

	return sum;
}

int getSum(char * arr[], int n)
{
        int i; int sum = 0;

        for (i=1;i <= n; i++)
        {

           sum += atoi( arr[i] );
        }

        return sum;
}

