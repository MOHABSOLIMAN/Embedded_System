/*
 ============================================================================
 Name        : MaxNum.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);
	while(1)
	{
		int x,y,i,max;
		printf("Enter number of compared values ... \n");
		scanf("%d",&x);
		printf("please enter the %d Numbers \n",x);
		if (i=0;i<=x;i++)
		{
			scanf("%d",&y);
		}
		/*max=x;
		if (max <y)
		{
			max = y;
		}
		if (max <z)
		{
			max = z;
		}

		/*if ((max<y) || (max < z)) // make it simple
		{
			if (y < z)
			{
				max = z;
			}
			else max = y;
		}*/
		printf("max num is : %d",max);
		printf("\n");
	}
}
