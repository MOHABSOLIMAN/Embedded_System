/*
 ============================================================================
 Name        : Question_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IS_Pwr(int x)
{
	// 2^3 >>> 2*2*2
	//  8  >>> 8%2 == 1
	for (int i = 2; i<=9 ; i++)
	{
		x %= (i*i*i);
		printf("x= %d \n",x);

		if(x == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int x=12;
	signed char a=0b11111110;
	printf("%d",a);
	int ret = IS_Pwr(x);
	printf("%d",ret);
	return EXIT_SUCCESS;
}
