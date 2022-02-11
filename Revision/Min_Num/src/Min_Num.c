/*
 ============================================================================
 Name        : Min_Num.c
 Author      : Mohab Soliman Mahmoud
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
	int min, x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	min = 0;
	    while (x && y && z)
	    {
	        --x;
	        --y;
	        --z;
	        ++min;
	    }
	printf("Min : %d",min);
}

// or with using division
/*
 * if (x/y==0)
 * {
 * x is the smallest
 * }
 * if else (x/z==0)
 * {
 * z is the smallest
 * }
 * else
 * {
 * y is the smallest
 * )
 */
