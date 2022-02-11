/**************************************************************************************************
 Name        : ex17.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_17
 **************************************************************************************************/

#include <stdio.h>
int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
		/* Divide number by 10 to get the next digit to right before the next loop iteration */
    	num /= 10;

		/* Increment the number of digits */
        ++count;
    }

    printf("Number of digits: %d", count);
    return 0;
}
