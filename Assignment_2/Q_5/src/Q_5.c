/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohab Soliman
 Description : Assignment 2 - Q_5
 **************************************************************************************************/
#include <stdio.h>

int CheckEvenOrOdd(unsigned int Number)
{
	if((Number % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	int number;
	printf("Please enter the number : ");
	scanf("%d",&number);
	if(CheckEvenOrOdd(number) == 0)
	{
		printf("%d is Even Number\n",number);
	}
	else
	{
		printf("%d is Odd Number\n",number);
	}
	return 0;
}
