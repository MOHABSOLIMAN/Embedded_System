/*
 ============================================================================
 Name        : Question_5(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max_num(int*arr, int size)        /* {9,2,6,4,89,9,6,23,6,6} */
{								      /* num = 9 >> num > loop in arr ? counts */
	int i,j,num,counter_1=0,counter_2=0;  /* 9 > counter = 1, num = 2 >> loop in arr */
	for(i=0 ; i<size ; i++)           /* 2 > counter_2 = 1 >> check counter_1 & counter_2 */
	{
		num = arr[i];
		for(j=i ; j<size;j++)
		{
			if(arr[j] == num)
			{
				counter_1++;
			}
		}
		if(counter_2 < counter_1)
		{
			counter_2 = counter_1;
			counter_1 = 0;
		}
		else
		{
			counter_1=0;
		}
	}
	return num;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int arr[]={9,23,6,4,2,9,23,23,23,23,23,16,15,48,16,16,16,16,16,16,16};
	int ret,size;
	size = sizeof(arr)/sizeof(arr[0]);
	ret = max_num(arr,size);
	printf("%d ",ret);
	return EXIT_SUCCESS;
}
