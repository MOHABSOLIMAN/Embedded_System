/*
 ============================================================================
 Name        : Question_7(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_arr(int * arr, int size)
{
	int i;
	for(i=0; i<size ;i++)
		{
			printf("%d ",arr[i]);
		}
}

void swap_2_arr(int * arr_1, int size_1,int * arr_2, int size_2)
{
	int size,i,temp;
	if(size_1 < size_2)
	{
		size = size_1;
	}
	else
	{
		size = size_2;
	}
	for(i = 0 ; i < size ; i++)
	{
		temp = arr_1[i];
		arr_1[i] = arr_2[i];
		arr_2[i]=temp;
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr_1[]={1,2,3,4,5,6,7}; int size_1=sizeof(arr_1)/sizeof(arr_1[0]);
	int arr_2[]={8,9,10,11,12,13,14,15,16};	int size_2= sizeof(arr_2)/sizeof(arr_2[0]);
	print_arr(arr_1,size_1);
	printf("\n---------------------\n");
	print_arr(arr_2,size_2);
	printf("\n---------------------\n");
	swap_2_arr(arr_1,size_1,arr_2,size_2);
	printf("\n---------------------\n");
	printf("\n---------------------\n");
	print_arr(arr_1,size_1);
	printf("\n---------------------\n");
	print_arr(arr_2,size_2);

	return EXIT_SUCCESS;
}
