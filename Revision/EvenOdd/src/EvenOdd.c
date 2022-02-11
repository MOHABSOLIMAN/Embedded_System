/*
 ============================================================================
 Name        : EvenOdd.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* setting up buffer*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	while(1)  /*infinite loop */
	{
	int x;
	printf("-------Welcome to my project------\n");
	printf("----------------------------------\n");
	printf("Please enter a number: .... ");
	scanf("%d",&x);
	/* if condition */
	if (x%2==0)
	{
		printf("%d is Even Number \n",x);
	}
	else
		printf("%d is Odd Number \n",x);
	printf("----------------------------------\n");
	printf("\n");
}
}
