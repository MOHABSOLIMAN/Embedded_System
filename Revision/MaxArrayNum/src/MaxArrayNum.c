/*
 ============================================================================
 Name        : MaxArrayNum.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define arr_size 4
#define fst_idx 0

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	short i, max=0;
	short arr[arr_size];
	printf("please enter the Array Elements... \n");
	for (i=fst_idx;i<arr_size;i++)
	{
		scanf("%d",&arr[i]);
	}

	max = arr[0];
	for (i=1;i<arr_size;i++)
	{
	if (arr[i]> max)
		max = arr[i];
	}
		printf("Max array Number is: %d \n",max);
}
