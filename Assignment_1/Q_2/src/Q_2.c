/**************************************************************************************************
 Name        : ex2.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_2
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char name[14]="Mohab Soliman";
	float grade=97.5;
	printf("my name is :%s\nmy grade : %f \n",name,grade);
	return 0;
}
