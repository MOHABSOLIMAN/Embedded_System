/*
 ============================================================================
 Name        : UpperToLower.c
 Author      : Mohab Soliman Mahmoud
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
	char x;
	while(1)
	{
	printf("please enter a char. ");
	scanf("%c",&x);
	if ((x>'a') && (x<'z'))
	{
		printf("The Upper Case is: %c \n",x-32);
	}
	else if ((x>'A') && (x<'Z'))
	{
		printf("It Already Upper Case %c \n",x);
	}
	else
	{
		printf("it's not a char.");
	}
}
}
