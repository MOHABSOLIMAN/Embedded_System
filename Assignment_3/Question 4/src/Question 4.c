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

void selection_sorting(int array[],const int size)
{
    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
		/* Assume that the current position contains the smallest number */
        min=i;
		/* Loop to get the position of smallest number in the array start from position i to the end of the loop */
        for(j=i+1;j<size;j++)
		{
            if(array[min]>array[j])
			{
				min=j;
			}
        }
		/* Swap value between the current postion and the smallest position */
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}



void selection(int* arr,int size)
{
	int i,j,temp,min;
	for(i=0;i<size-1;i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}

}



int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	int i,arr[arr_size]={-2,3,7,-9};

	//selection_sorting(arr,arr_size);
	selection(arr,arr_size);

	for(i=0;i<arr_size;i++)
	{
		printf("%d  ",arr[i]);
	}
	return EXIT_SUCCESS;
}
