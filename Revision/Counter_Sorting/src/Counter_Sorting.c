/*
 ============================================================================
 Name        : Counter_Sorting.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#define fst_idx 0

void scan_arr (int a[],int asize)
{
	for (int i=fst_idx;i<asize;i++)
		{
			scanf("%d",&a[i]);
		}
}

void print_2Darr(char a[][50],char element)
{
	for(int i=fst_idx;i<100;i++)
	{
		for(int j=0;a[i][j]!=0;i++)
	{
			if(a[i][j]==element)
			{
		printf("The character %c is located at page No. 1 in line [%d] the letter is [%d] \n",element,i,j);
			}
	}
}
}
void count_sort(int *arr,int size,int R)
{
	  int i,count[10]={0};
	  int V[22]={0};
	  //creating frequency array
	  for (i=0;i<size;i++)
	  {
		  count[arr[i]]++;
	  }
	  for(i=1;i<10;i++)
	  {
		  count[i] += count[i-1];
	  }
	  for(i=21;i>=0;i--)
	  {
		  V[--count[arr[i]]]=arr[i];
	  }
	  for(i=0;i<22;i++)
	  {
		  arr[i]=V[i];
	  }
}


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    char page[10][50]={"ahmed","mohab","mohamed ahmed !!","omar"};
    print_2Darr(page,'m');
}
