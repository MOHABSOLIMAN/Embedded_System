/*
 ============================================================================
 Name        : Question_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last_occarance(int* arr,int size , int element, int* counter)
{
	*counter = 0;
	int i,idx=-1;
	for(i = 0 ; i<size ; i++)
	{
		if(arr[i] == element)
		{
			idx = i;
			(*counter)++;

		}
	}
	return idx;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[10]={5,2,8,7,9,7,5,4,2};
	int index,counter,size=sizeof(arr)/sizeof(arr[0]);
	index=last_occarance(arr,size,7,&counter);
	printf("The index of number 7 is %d \n",index);
	printf("times of iterations are %d \n",counter);
	return EXIT_SUCCESS;
}
