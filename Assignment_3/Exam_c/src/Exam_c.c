/*
 ============================================================================
 Name        : Exam_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int FindMostOccuring_m (int array_sizr , int* array)
{
  int max=0,temp2=0,temp1=0,i,j;
  for(i=0;i<array_sizr;i++)
  {
    for(j=0;j<array_sizr;j++)
    {
      if(i==j)
      {
        continue;
      }
     if(array[i]==array[j])
     {
       temp2++;
     }
     printf("%d    %d\n",array[i],temp2);
    }
    if(temp2>=temp1)
    {
      max=array[i];
      temp1=temp2;
    }
    temp2=0;
    printf("%d\n",max);
  }
  return max;
}

int FindMostOccuring(int array_size, int* array)
{
    int i, j, max, count;
    int maxCount = 0;
    for(i = array_size; i> 0; i--)
    {
        count = 1;
        for(j = array_size ; j > i+1; j--)  /* check for duplicate elements */
        {
            if(array[j] == array[i])
            {
                count++;
                if(count > maxCount)
                {
                    max = array[j];
                }
            }
        }
    }
    return max;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int ret,size;
	int arr[] = {1,2,2,3,3,3,3,4,4,4,4,4,4,4,3,3};
	size = sizeof(arr)/sizeof(arr[0]);
	ret = FindMostOccuring_m(size,arr);
	printf("the max occurance value is %d",ret);

	return 0 ;
}
