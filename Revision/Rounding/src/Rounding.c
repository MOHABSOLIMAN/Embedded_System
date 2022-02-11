/*
 ============================================================================
 Name        : Rounding.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);
	int x,y;
	double z;
	while(1)
	{
		 scanf("%d",x);
		 y = 100*x;
		 z = 100*x-y;
			if(z>0)
				y = (x+0.01)*100;
			else
				y = x*100;

	printf("\n %d \n",y);
}
}
