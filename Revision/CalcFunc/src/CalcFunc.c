/*
 ============================================================================
 Name        : CalcFunc.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long Calc_func(char x,int y, int z);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char op;
	short x,y;
	long z;
	printf ("please enter the operation u want to do:..");
	scanf("%d",&op);
	printf("please enter the numbers you want to calculate:..");
	scanf("%d %d",x,y);
	z=Calc_func(op,x,y);
	printf("the result is: %d",z);
}

long Calc_func(char x,int y, int z)
{
	long w;
	switch (x){
	case 1:
		w=y+z;
		break;
	case 2:
		w=y-z;
		break;
	case 3:
		w=y*z;
		break;
	case 4:
		 w=y/z;
		break;
	}
	return w;
}
