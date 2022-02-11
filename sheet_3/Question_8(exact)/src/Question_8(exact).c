/*
 ============================================================================
 Name        : Question_8(exact).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int long_occ(int * arr, int size, int * numm)
{
	int i,max=0,count=0, num=-1;
	for(i = 0;i<size-1;i++)
	{
		if(arr[i] == arr[i+1])
		{
			count++;
			if(count > max)
						{
							max = count;
							num = arr[i];
						}
		}
		else
		{
			count=0;
		}
	}
	*numm = max+1;
	return num;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num;
	int arr_1[]={1,2,3,3,3,3,4,4,4,4,4,3,3,3,5,6,7}; int size_1=sizeof(arr_1)/sizeof(arr_1[0]);

	int ret = long_occ(arr_1,size_1,&num);
	printf("number: %d -- count: %d",ret,num);

	return EXIT_SUCCESS;
}
