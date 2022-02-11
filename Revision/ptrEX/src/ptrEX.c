/*
 ============================================================================
 Name        : ptrEX.c
 Author      : Mohab Soliman
 Version     :
 Copyright   : Your copyright notice
 Description : Arrays in functions (scanning, printing and increment)
 ============================================================================
 */

#include <stdio.h>

#define arr_size 6
#define fst_idx 0
#define NotFound -1

void inc_num (int *a)
{
	*a+=1;
}

void dec_num (int *a)
{
	*a-=1;
}

void inc_arr (int a[],int asize)
{
	for (int i=fst_idx;i<asize;i++)
	{
		a[i]++;
	}
}

void dec_arr (int a[],int asize)
{
	for (int i=fst_idx;i<asize;i++)
	{
		a[i]--;
	}
}

void scan_arr (int a[],int asize)
{
	for (int i=fst_idx;i<asize;i++)
		{
			scanf("%d",&a[i]);
		}
}

void print_arr(int a[],int asize)
{
	for(int i=fst_idx;i<asize;i++)
	{
		printf("arr[%d]= %d \n",i,a[i]);
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
		for(int j=fst_idx;j<(asize-1);j++)
		{
		if(a[i]+1>a[i])
		{
			z=a[i];
			a[i]=a[i+1];
			a[i+1]=z;
		}
		}
	}
}

int binarySearch(int a[], int first, int last, int search)
{
  int middle;

  if (first > last) // Not found
     return -1;

  middle = (first + last)/2;

  if (a[middle] == search)  // element found
    return middle;
  else if (search > a[middle])
    return binarySearch(a, middle+1, last, search);
  else
    return binarySearch(a, first, middle-1, search);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int arr[arr_size],first,last,index,search;
	printf("please enter the array values... \n");
	scan_arr(arr,arr_size);
	printf("please enter search element..\n");
	scanf("%d",&search);
	inc_num(&arr[3]);
	printf("arr[3]= %d \n",arr[3]);
	printf("\n");

	inc_arr(arr,arr_size);
	print_arr(arr,arr_size);
	printf("\n");
	dec_arr(arr,arr_size);
	print_arr(arr,arr_size);

	printf("index= %d",linear_search(arr,65,5));
	printf("\n");
	printf("sorting is:... \n");
	sort_arr(arr,5);
	print_arr(arr,5);

	 first = 0;
	 last = arr_size - 1;

	index = binarySearch(arr, first, last, search);

	  if (index == -1)
	    printf("Not found! %d isn't present in the list.\n", search);
	  else
	    printf("%d is present at location %d.\n", search, index + 1);
	  for (int i = n1 + 1; i < n2; ++i) {
	  flag = checkPrimeNumber(i);

	         if (flag == 1)
	             printf("%d ", i);
}
}
