/*
 ============================================================================
 Name        : StudentsGrade.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	while(1)
	{
		int x;
	printf("----------------------------------\n");
	printf("Please enter Your grade: ");
	scanf("%d",&x);
	if (x<100)
	{
	if (x>90)
	{
		printf("Your Grade is A \n");
	}
	else if(x>75)
	{
		printf("Your Grade is B \n");
	}
	else if(x>50)
	{
		printf("Your Grade is C \n");
	}
	else
		printf("Your Grade is F \n");
	printf("----------------------------------\n");
	printf("\n");
	printf("\n");
	}
	else
		printf("Please enter another number....\n");
}
}
