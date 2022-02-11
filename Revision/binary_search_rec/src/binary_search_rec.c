/*
 ============================================================================
 Name        : binary_search_rec.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define arr_size 6
#define fst_idx 0
#define NotFound -1
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
	int arr[arr_size];
	int index,search;
		int first = 0,last;

	printf("please enter the array values... \n");
	scan_arr(arr,arr_size);
	printf("please enter search element..\n");
	scanf("%d",&search);

	last= arr_size - 1;

		index = binarySearch(arr, first, last, search);

		  if (index == -1)
		    printf("Not found! %d isn't present in the list.\n", search);
		  else
		    printf("%d is present at location %d.\n", search, index + 1);
}
