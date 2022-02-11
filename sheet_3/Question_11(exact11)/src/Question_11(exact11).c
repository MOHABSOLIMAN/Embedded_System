/*
 ============================================================================
 Name        : Question_11(exact11).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int rem_rep(int*arr,int sizee,int* psize)
{
	int i,j=0;
	int static arr1[100]={0};
	for(i=0;i<sizee;i++)
	{
		if(arr[i]== arr[i+1])
		{
		}
		else
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	*psize=j;
	return arr1;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[]={1,2,2,3,3,3,4,4,5,5,5,5};
	int sizee=sizeof(arr)/sizeof(arr[0]);
	int size,i;
	int *p=rem_rep(arr,sizee,&size);
	for(i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\nsize= %d ",size);

	return EXIT_SUCCESS;
}
