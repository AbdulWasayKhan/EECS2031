/**
*
* Syed Shah
* 213927942
* 22/09/17
* identifiers.c - This is my solution to the second lab of eecs2031.
* 
* For Q1 and Q2 we needed to change the int values to doubles so they could
* divide appropriatley. Q2 had the wrong equation as well.
*
* For Q3, instead of going through the whole array, we went through half of it
* since it would sort everything by half way. If it were allowed to run to 
* through the whole array, it would return the array to its original state.
*
* For Q4 we had to let the loops continue instead of terminating them at the
* end of the line.
* 
**/

# include <stdio.h>
# include "identifiers.h"

/* you may wish to remove the following lines */
#pragma GCC diagnostic ignored "-Wpointer-sign"
#pragma GCC diagnostic ignored "-Wdangling-else"
#pragma GCC diagnostic ignored "-Wempty-body"

/* Q1.convert a temperature in F to it in C */
float fahrenheit2celsius(const float f) 
{
	return 5.0/9.0 * (f-32.0);
}

/* Q2. convert a temperature in C to F */
float celsius2fahrenheit(const float c) 
{
	return 32.0 + (c * 9.0 / 5.0);
}

/* Q3. reverse the elements in an array of int's in place */
void reverse_elements(int vals[], int count)
{
	int i;
	for(i=0;i<count/2;i++) {
		int t = vals[i];
		vals[i] = vals[count-1-i];
		vals[count-1-i] = t;
	} 
}

/* Q4. Count the number of '*' in the string given */
int count_stars(const char *s) 
{
	int count = 0;
	for(;*s;s++){
		if(*s == '*'){
			count++;
		}
	}
	return count;
}