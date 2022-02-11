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
#define max_size 100
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char str[max_size];

	scanf("\n");
	scanf("%s",str);



	return EXIT_SUCCESS;
}
