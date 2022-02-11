/*
 ============================================================================
 Name        : Question_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max_min_arr(int* arr, int size, int* max, int* min_idx, int * max_idx)   /* 1 - ARR, 2 - SIZE , 3 - MAX  */
{												/* {5,2,8,7,9,7,5,4,2}  min = 5 -> loop */
	int min=arr[0],i;							/* if 2 < 5  min = 2  >>> if 8 < 2 >>> if 7 < 2*/
	for(i=0 ; i<size ; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			*min_idx = i;
		}
		else if(arr[i] > (*max))
		{
			*max = arr[i];
			*max_idx = i;
		}
	}

	return min;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[10]={5,1,8,7,9,7,5,4,2,6};
	int index,max=-1,size=sizeof(arr)/sizeof(arr[0]),min_idx=0,max_idx=0;
	index = max_min_arr(arr,size,&max,&min_idx,&max_idx);
	printf("Min = %d and it's index is %d \n",index,min_idx);
	printf("Max = %d and it's index is %d \n",max,max_idx);
	return EXIT_SUCCESS;
}
