/**************************************************************************************************
 Name        : ex8.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_8
 **************************************************************************************************/

#include <stdio.h>
#include <math.h> /* for sqrt function */

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    int input;
    int root;
    printf("Please enter the required number : ");
    scanf("%d",&input);
    root=sqrt(input);

	/* check of the input number is perfect square or not */
    if(input==(root*root))
    {
        printf("%d is the perfect square root of %d",root,input);
    }
    else
    {
        printf("perfect square root not exist");
    }
    return 0;
}
