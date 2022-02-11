/*
 * code.c
 *
 *  Created on: Oct 22, 2020
 *      Author: Mohab
 */

#include <stdio.h>
char x;

void main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	while(1)
	{
	printf("please enter the character you want to check:");
	scanf("%c",&x);
			if ((x>'a') && (x<'z'))
			{
			printf("the char is a Lower case alph.\n");
			}
			else
			{
				printf("the char is a Upper case alph.\n");

			}

		}
	}
/*void Alph_check(char x)
{
	if (65<x<91)
	{
		if ((x>'a') && (x<'z'))
		{
		printf("the char is a Lower case alph.");
		}
		else
		{
			printf("the char is a Upper case alph.");

		}
	}
	else
	{
		printf("the char is not alph.");

	}
}*/
