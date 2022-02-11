/*
 ============================================================================
 Name        : InBetween.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if (n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);
	int i,x,y,Fst_idx,Lst_idx;
	while(1)
	{
		printf("\n------------------------------------\n");
		printf("please enter the Range of numbers..\n");
		scanf("%d %d",&x,&y);
		if(x>y)
		{
			Fst_idx = y;Lst_idx = x;
		}
		else
		{
			Fst_idx = x;Lst_idx = y;
		}

		if(Fst_idx == Lst_idx)
		{
			printf("The only Number is: %d",Fst_idx);
		}
		else
		{
			printf("the in between values is: ");
			for(i=Fst_idx+1;i<Lst_idx;i++)
			{
				if(IsPrime(i)==1) //to Check prime no. between range
				printf("%d \t",i);
				if((i%2)==0) //to print even numbers
				{
				printf("%d \t",i);
				}
			}
		}
		printf("\n------------------------------------\n");
		printf("\n");

	}
}
