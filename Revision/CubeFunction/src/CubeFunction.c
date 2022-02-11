/*
 ============================================================================
 Name        : CubeFunction.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long Get_Cube(long x);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	long x,z;
	printf("please enter a number to get its cube:");
	scanf("%d", &x);
	z=Get_Cube(x);
	printf("Cube of %d is: %d",x,z);
}

long Get_Cube(long x)
{
	long z;
	z=x*x*x;
	return z;
}
