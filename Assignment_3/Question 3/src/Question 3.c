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
#define arr_size 5

void bubble_sort(int* arr,int);
void bubble(int* arr,int size);

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[arr_size] = {-2, 45, 0, 11, -9};
	int i;
	//bubble_sort(arr,arr_size);
	bubble(arr,arr_size);
	for(i=0;i<arr_size;i++)
	{
		printf("%d \t",arr[i]);
	}
	return EXIT_SUCCESS;
}

void bubble(int* arr,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		j=i+1;
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


void bubble_sort(int* arr,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;++i)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			//printf("%d \t",arr[i]);
		}
		//printf("\n");
	}
}
