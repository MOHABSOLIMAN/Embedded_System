/*
 ============================================================================
 Name        : Question_10(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void zigzag(int*arr1,int*arr2,int size,int* arr,int size_arr)
{
	int i,j;

	for(i=0,j=0;i<size_arr&&j<size;i++,j++)
	{
			arr[j]=arr1[j];
			j++;
			arr[j]=arr2[j-1];
	}
}

void array_print(int *array,int size)
{
	int i;
	printf("array values are \n");
	for(i=0;i<size;i++)
	 {
		printf("%d \n",(array[i]));
	 }
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr1[]={1,2,3,4,5};
	int arr2[]={11,12,13,14,15};
	int size = sizeof(arr1)/sizeof(arr1[0]);
	int arr[100]={0};int size_arr= 2*size;
	zigzag(arr1,arr2,size,arr,size_arr);
	array_print(arr,size_arr);
	return EXIT_SUCCESS;
}
