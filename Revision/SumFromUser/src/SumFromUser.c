/*
 ============================================================================
 Name        : SumFromUser.c
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
	setvbuf (stderr, NULL, _IONBF, 0);
	int x,y,sum;
	while(1)
	{
	puts("Please enter Required Numbers: ");
	scanf("%d",&x);
	printf("please enter the numbers ..... \n");
	sum=0;
	for(y=0;y<x;y++)
	{
		sum+=y;
	}
	printf("sum is: %d \n",sum);
}
}
