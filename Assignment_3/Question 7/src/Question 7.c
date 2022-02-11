/*
 ============================================================================
 Name        : Question.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int i,nth;

	printf("please enter a nth term that you want to compute to: \n");
	scanf("%d",&nth);

	for(i=1;i<nth;i+=2)
	{
		printf("the nth of term %d is: %d \n",nth,i);
	}

	return EXIT_SUCCESS;
}
