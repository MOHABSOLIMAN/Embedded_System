/**************************************************************************************************
 Name        : ex9.c
 Author      : Mohab Soliman
 Description : Assignment 2 - Q_9
 **************************************************************************************************/

#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp  = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/**********************************************************
 ***** Another Method without using the Temp variable *****

void swap(int *ptr1, int *ptr2)
{
	int temp;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}

************************************************************/

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	int a = 3, b = 2;
	printf ("Number before swapping : a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf ("Number after swapping : a=%d b=%d\n",a,b);
	return 0;
}


