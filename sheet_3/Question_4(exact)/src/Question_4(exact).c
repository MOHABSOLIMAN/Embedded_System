/*
 ============================================================================
 Name        : Question_4(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 100

int bet_num(int num1, int num2,int* arr)
{
	int i;
	int size = num2 - num1-1;
	for(i=0 ; i<size ;i++)
	{
		arr[i]= num1+i+1;
	}
	return size;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[max],x=2,y=6,i;
	int size=bet_num(x,y,arr);
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return EXIT_SUCCESS;
}
