/*
 ============================================================================
 Name        : PWR.c
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
	setvbuf(stderr, NULL, _IONBF, 0);
	long long n,p,result=1;
	while(1)
	{
		printf("enter a number and power: ");
		scanf("%lld %lld",&n,&p);
		for (int i=0;i<p;i++)
		{
			result*=n;
		}
		printf("the result = %lld \n",result);
	}

}
