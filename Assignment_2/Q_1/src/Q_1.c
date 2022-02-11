/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohab Soliman
 Description : Assignment 2 - Q_1
 **************************************************************************************************/

#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	int result;
	printf("Please enter any number : ");
	scanf("%d",&num);
	result = cube(num);
	printf("\nThe cube value of %d is %d",num,result);
	return 0;
}
