/**************************************************************************************************
 Name        : ex20.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Ex 20
 **************************************************************************************************/

#include <stdio.h>

int main(void)
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int i, j, rows;

	printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");

	/* Loop for each row */
	for(i=0;i<rows;i++)
	{
		/* print the left spaces */
		for(j=i;j<rows-1;j++) printf(" ");

		/* print the stars number of stars in each row = ((2 * Row Number) + 1) */
		for(j=0;j<((2*i)+1);j++) printf("*");

		printf("\n");
	}
	return 0;
}

