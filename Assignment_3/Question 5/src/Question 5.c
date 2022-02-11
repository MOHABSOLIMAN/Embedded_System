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
#include "functions.h"

#define arr_size 5

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[arr_size],element;

	printf("Please Enter array of size[%d] \n",arr_size);

	scan_arr(arr,arr_size);

	printf("the Entered array is: \n");
	print_arr(arr,arr_size);

	printf("\n please enter the element you want to search for: \n");
	scanf("%d",&element);

	printf("The idx for the element you entered is: %d \n",linear_search(arr,arr_size,element));
	return EXIT_SUCCESS;
}
