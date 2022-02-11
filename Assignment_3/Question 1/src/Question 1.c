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
#define arr_size 4

int summation(int numbers_size,int* numbers);

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int ret,arr[arr_size]={1,2,3,4};
	ret = summation(arr_size,arr);
	printf("The Sum of the Arrays is %d",ret); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int summation(int numbers_size,int* numbers)
{
	int i,sum=0;
	for (i=0;i<numbers_size;i++)
	{
		sum +=numbers[i];
	}
	return sum;
}
