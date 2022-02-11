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

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	const int x = 10;
	int i;
	int* ptr = &x;
	long long *ptrr[3];
	char s[1000];
	printf("x = %d \n",x); /* prints !!!Hello World!!! */
	*ptr = 9;
	printf("x = %d \n",x);

	printf("size of ptrr = %d",sizeof(ptrr));

	printf("---------------------\n");
	scanf("%s",s);
	i=0;
	while(s[i]!='\0')
	{
		printf("%c ",s[i]);
		i++;
	}

	return EXIT_SUCCESS;
}
