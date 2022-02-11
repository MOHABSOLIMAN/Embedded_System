/**************************************************************************************************
 Name        : ex10.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Ex 10
 **************************************************************************************************/

#include "stdio.h"

int main() {
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    char operator;
    float firstNumber,secondNumber;
    double result;

    printf("Enter an operator + or - or * or % ");
    scanf("%c", &operator);

    printf("\nEnter two operands: ");
    scanf("%f %f",&firstNumber, &secondNumber);

	/* Swicth case to perfrom the required operations */
    switch(operator)
    {
        case '+':
        	result = firstNumber + secondNumber;
            printf("\n%f + %f = %lf",firstNumber, secondNumber, result);
            break;

        case '-':
        	result = firstNumber - secondNumber;
            printf("\n%f - %f = %lf",firstNumber, secondNumber, result);
            break;

        case '*':
        	result = firstNumber * secondNumber;
            printf("\n%f * %f = %lf",firstNumber, secondNumber, result);
            break;

        case '/':
        	result = firstNumber / secondNumber;
            printf("\n%f / %f = %lf",firstNumber, secondNumber, result);
            break;

        /* operator doesn't match any case constant (+, -, *, /) */
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
