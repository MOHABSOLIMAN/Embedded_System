/*
 ============================================================================
 Name        : ArrSeaching.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//#define arr_size 1000
#define fst_idx 0
#define NotFound -1

void print_arr(int a[],int asize)
{
	for(int i=fst_idx;i<asize;i++)
	{
		printf("arr[%d]= %d \n",i,a[i]);
	}
}

void scan_arr (int a[],int asize)
{
	for (int i=fst_idx;i<asize;i++)
		{
			scanf("%d",&a[i]);
		}
}

int linear_search (int a[],int element,int asize)
{
	for (int i=fst_idx;i<asize;i++)
	{
		if (element == a[i])
		{
			return i;
		}
	}
 return NotFound;
}

void sort_arr(int a[],int asize)
{
	int z;
	for(int i=fst_idx;i<asize;i++)
	{
		for(int j=i+1;j<asize;j++)
		{
		if(a[i]>a[j])
		{
			z=a[i];
			a[i]=a[j];
			a[j]=z;
		}
		}
	}
}

int Arr_copy(int *original,int ori_size,int *copy,int cpy_size)
{
	int i,size=0;
	if(ori_size>cpy_size)
		ori_size=cpy_size;
	for(i=fst_idx;i<ori_size;i++)
	{
			copy[i]=original[i];
			++size;
	}
	return size;
}

void array_swap(int *source,int s_size,int *swapped,int sw_size)
{
	int i,size,swap;
	if(s_size==sw_size)
	{
		size=s_size;
	}
	else if(s_size<sw_size)
	{
		size=s_size;
	}
	else
	{
		size=sw_size;
	}
	for (i=fst_idx;i<size;i++)
		{
			swap=source[i];
			source[i]=swapped[i];
			swapped[i]=swap;
		}
}

void reverse_swap_arr(int *source,int s_size,int *swapped,int sw_size)
{
	int size,i,swap;
	if(s_size==sw_size)
		{
			size=s_size;
		}
		else if(s_size<sw_size)
		{
			size=s_size;
		}
		else
		{
			size=sw_size;
		}
	for (i=0;i<size;i++)
			{
				swap=source[i];
				source[i]=swapped[size-1-i];
				swapped[size-1-i]=swap;
			}
}

void reverse_arr(int *arr,int s_array)
{
	int i,z;
		for (i=0;i<s_array/2;i++)
			{
				z=arr[i];
				arr[i]=arr[s_array-1-i];
				arr[s_array-1-i]=z;
			}
}

void circular_shift (int *arr,int size,int Nshifts)
{
    int i,temp1,j;
    for (j=0;j<Nshifts;j++)
    {
    temp1=arr[size-1];
    for (i=size;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp1;
    }
}

int count_Max(int arr[], int size)
{

}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int arr[22]={1,2,2,3,3,3,3,3,4,4,4,5,6,6,6,6,6,6,6,6,7,8};
//	int arr2[10]={0};
	//int n;
	//int x;
	while(1)
	{
	/*printf("please enter the Source array value... \n");
	scanf("%d",&x);
	printf("enter numbers: \n");
	scan_arr(arr,x);
	printf("please enter the No of Shifts in Array: ...\n");
	scanf("%d",&n);*/
	/*
	 *
	 *printf("please enter search element..\n");
	scanf("%d",&search);
	printf("index= %d",linear_search(arr,search,arr_size));
	printf("\n");*/
	/*printf("-------------------------------------------\n");
	printf("After sorting ... \n");
	sort_arr(arr,arr_size);
	printf("Largest Number in array is: %d \n",arr[arr_size-1]);
	 *

	z=Arr_copy(arr,x,arr2,n);
	print_arr(arr,x);
	printf("-----------------------------\n");
	print_arr(arr2,z);
	printf("\nNo of Copied Elements: %d",z);
	*
	*/
//	print_arr(arr,x);
//	printf("-----------------------------\n");
//	print_arr(arr2,n);
//	printf("-----------------------------\n");
//	reverse_swap_arr(arr,x,arr2,n);
//	print_arr(arr,x);
//	printf("-----------------------------\n");
//	print_arr(arr2,n);
	//reverse_arr(arr,x);
	//print_arr(arr,x);
	//Rot_arr(arr,x,n);
	printf("-----------------------\n");
	//print_arr(arr,x);
	int count=count_Max(arr,22);
	printf("counter= %d",count);
}
}
