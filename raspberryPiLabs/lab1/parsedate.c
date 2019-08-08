/**
*
* Syed Shah
* 213927942
* 15/09/17
* parsedate.c - This is my solution to the first lab of eecs2031.
* 
* For parse_year I just placed the first 4 chars from the buf pointer into my
* year char array and converted it to an integer using the function atoi.
* 
* For parse_month I saved the whole date in a char array making sure it's length 
* 11 too add the null char. I go through the array starting from index 5 since I
* know the first value of the month starts there. I go until index 6 because the
* month can be 2 digits long.
*
* For parse_day I saved the whole date in a char array. I went through the array
* checking for a / char. Every time I encountered a / I incremented my counter 
* by 1. Once my counter is at value 2, I start saving the remaining chars in my
* day char array. I then convert the day array to an int using atoi.
* 
**/

# include <stdio.h>
# include <stdlib.h>
# include "parsedate.h"

int parse_year(const char *buf) 
{
	int i;
	char year[4];
	sscanf(buf, "%s", year);
	i = atoi(year);
	return i;
	
}

int parse_month(const char *buf) 
{
	int j, i;
	char date[11], month[2];
	sscanf(buf, "%s", date);
	month[1] = 0;
	for(i = 5; i < 7; i++)
	{
		if(date[i] == '/')
		{
			break;
		}
		else
		{
			month[i-5] = date[i];
		}
	}
	j = atoi(month);
	return j;
}


int parse_day(const char *buf) 
{
	int j, i, n = 0, k = 0;
	char date[11], day[2];
	sscanf(buf, "%s", date);
	for(i = 0; i < 10; i++)
	{
		if(n == 2)
		{
			day[k] = date[i];
			k++;
		}
		if(date[i] == '/')
		{
			n++;
		}
	}
	j = atoi(day);
	return j;
}