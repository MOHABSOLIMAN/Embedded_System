/*
 ============================================================================
 Name        : Question_11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define max_size 50

char frequency_char(char* arr,char element)
{
	int i=0;
	int count = 0;
	char first = element;
	while(arr[i] != '\0')
	{
		if(arr[i] == first)
		{
			count++;
		}
		i++;
	}
	return count;
}

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char arr[max_size]= "helloozozzzd";
	char n='o';
	int ret;
	ret = frequency_char(arr,n);
	printf("The Frequency of %c is: %d",n,ret);
	return EXIT_SUCCESS;
}
