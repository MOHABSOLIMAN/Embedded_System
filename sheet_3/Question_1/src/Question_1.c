/*
 ============================================================================
 Name        : Question_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 100

int Last_Occarance(int * arr,int size, int element)
{
	int z=-1;
	for(int i= 0 ; i<size; i++)
	{

		if((arr[i] == element) && (i<size))
		{
			z = i;
		}
	}
	return z;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[max] = {1,4,5,6,8,8,9,7,8,4};
	int ret = Last_Occarance(arr,max,8);
	printf("%d",ret);
	return EXIT_SUCCESS;
}
