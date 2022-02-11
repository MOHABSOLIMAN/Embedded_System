/*
 * code.c
 *
 *  Created on: Oct 22, 2020
 *      Author: Mohab
 */

#include <stdio.h>


void Sign_check(char x);

void main(void){
	char x;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("please enter a numer:");
	scanf("%d",&x);
	Sign_check(x);

}

void Sign_check(char x){
	if(x>0)
	{
		printf("positive");
	}
	else if(x<0)
	{
		printf("Negative");
	}
	else
	{
		printf("Zero");
	}
}
