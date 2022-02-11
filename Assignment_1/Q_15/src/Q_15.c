/**************************************************************************************************
 Name        : ex15.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Ex 15
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    int num, power;

    long long result = 1;

    printf("Enter a num number: ");
    scanf("%d", &num);

    printf("\nEnter an power: ");
    scanf("%d", &power);

    /* Multiply the number by its value for number of times equals to the input power */
    while (power != 0)
    {
        result *= num;
        --power;
    }

    printf("\nAnswer = %lld", result);

    return 0;
}
