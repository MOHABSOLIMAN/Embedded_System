 /*
 ============================================================================
 Name        : Question_12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 1000

int sizeoff(char* arr,int size)
{
	int n;
	n = sizeof(arr)/sizeof(arr[0]);
	return n;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int ret;
	char arr[max]="mohab";

	ret= sizeoff(arr,max);
	printf("%d",ret);

	return 0;
}
