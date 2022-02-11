/**************************************************************************************************
 Name        : ex3.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_3
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    float temp_cel,temp_fah;
    printf("Please enter the temperature value in Celsius : ");
    scanf("%f",&temp_cel);

	/* Calculate the temp in Fahrenheit */
    temp_fah=((temp_cel*9)/5)+32;

    printf("\nThe temperature in Fahrenheit is : %f",temp_fah);
    return 0;
}
