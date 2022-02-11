/*
 ============================================================================
 Name        : Question_6(exact.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int pwr_3(int num)   /* num >> if num = x ^ 3 >> num = x*x*x >> num * 3 >> num * num * num  */
{
	int i,res = 1;   /* num = 9  >> res = 27 >>  */
	for(i = 1 ; res <= num ; i++)
	{
		res = i*i*i;
		if(res == num)
			return true;
	}
	return false;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int x= pwr_3(124);
	if(x) printf("it's power of 3");
	else printf(" It's not power of  3");
	return EXIT_SUCCESS;
}
