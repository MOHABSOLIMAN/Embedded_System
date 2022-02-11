/*
 ============================================================================
 Name        : C_Exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int MR2NUM(int size,int * arr)       // {1,2,2,3,3,3,3,4,4,4,4,3,3,1}
{
	int max=0,i,count=1,num;
	for(i=0;i<size-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
			if(count > max)
			{
				max = count;
				num=arr[i];
			}
		}
		else
		{
			count = 1;
		}


	}


	return num;
}
int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[]={1,2,2,2,2,2,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,1,1,1,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int num=MR2NUM(size,arr);
	printf("%d\n",num);

	return EXIT_SUCCESS;
}
