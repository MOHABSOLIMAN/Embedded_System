/*
 ============================================================================
 Name        : Question_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define maxx 100
void Max_Min(int*arr,int size,int *max,int *min,int *max_idx, int *min_idx)
{
	int i = 0;
	*max = arr[0];
	*min = arr[0];
	for(i = 0 ; i<size ; i++)
	{
		if(arr[i] > *max)
		{
			*max = arr[i];
			*max_idx = i;
		}
		if(arr[i] <= *min)
		{
			*min = arr[i];
			*min_idx = i;
		}
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[maxx]={1,2,3,5,6,8,9,6,87,8,1};
	int max,min,max_idx,min_idx;
	Max_Min(arr,maxx,&max,&min,&max_idx,&min_idx);
	printf("max = %d, min =  %d, max_idx = %d, min_idx = %d",max,min,max_idx,min_idx);
	return EXIT_SUCCESS;
}
