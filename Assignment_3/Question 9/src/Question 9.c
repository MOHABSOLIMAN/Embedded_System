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
#define size 100
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int n,i,arr[size];
	printf("please enter n: \n");
	scanf("%d",&n);
	arr[0]=1;
	arr[1]=1;
	for(i=2;i<size;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}

	printf("%dth of the array is : %d \n",n,arr[n-1]);
	return EXIT_SUCCESS;
}
