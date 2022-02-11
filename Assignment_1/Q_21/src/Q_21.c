/**************************************************************************************************
 Name        : ex21.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_21
 **************************************************************************************************/

#include<stdio.h>

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    int i,j,rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            if( (j==i) || (j==rows-i-1) )
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

