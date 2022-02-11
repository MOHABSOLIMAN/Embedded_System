/*
 * functions.c
 *
 *  Created on: Sep 21, 2021
 *      Author: Mohab
 */

void scan_arr(int* arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}


void print_arr(int* arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
	}
}



void swap(int* x,int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void bubble_sort(int* arr,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void selection(int* arr,int size)
{
	int i,j,temp,min;
	for(i=0;i<size-1;i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
		swap(arr[min],arr[i]);
	}
}

char str_check_repeated(char* arr)
{
	int i=1,j,flag;
	while(arr[i] !='\0')
	{
		j=i-1;
		printf(" i = %d \n",i);
			if (arr[i] == arr[j])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		i++;
	}
	return flag;
}

int linear_search(int* arr,int size,int element)
{
	int i,idx=-1;
	for(i=0;i<size;i++)
	{
		if(arr[i] == element)
		{
			idx=i;
		}
	}
	return idx;
}
