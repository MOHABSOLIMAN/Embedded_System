/*
 ============================================================================
 Name        : sHIFTING.c
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
	int x,y,counter=0;
	char i;
	while(1)
	{
	printf("please enter a number: ");
	counter=0;
	scanf("%d",&x);
	for(;x>0;)
	{
	y=(x&1);
	if(y==1)
	{
		++counter;
	}
	x=x>>1;
	}
	printf("%d \n",counter);
}
}
