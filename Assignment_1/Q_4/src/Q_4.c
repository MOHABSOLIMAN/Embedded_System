/**************************************************************************************************
 Name        : ex4.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_4
 **************************************************************************************************/

#include <stdio.h>

#define PI 3.14

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    float radious,area,circumference;
    scanf("%f",&radious);

	/* Calculate the circle area */
    area=PI*radious*radious;

	/* Calculate the circle circumference */
    circumference=2*PI*radious;

    printf("Circle Area=%f\nCircle Circumference=%f\n",area,circumference);
    return 0;
}
