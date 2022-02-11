/*
 ============================================================================
 Name        : Question_6(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev_arr(int* arr,int size) 	/* {9,23,6,4,2,9,23,23} */
{
	int i,temp;
	for(i = 0; i<size/2;i++)
	{
		temp = arr[size-i-1];
		arr[size-i-1]=arr[i];
		arr[i] = temp;
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int i,arr[]={9,23,6,4,2,9,23,23,29};
	int size= sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<size ;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n------------------------------------\n");
	rev_arr(arr,size);
	for(i=0; i<size ;i++)
		{
			printf("%d ",arr[i]);
		}

	return EXIT_SUCCESS;
}
