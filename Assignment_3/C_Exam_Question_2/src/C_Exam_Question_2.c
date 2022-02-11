#include<stdio.h>
#include<stdlib.h>

int MaxZeroesBetweenOnes(int num)       //0b100010011001
{
	int i,flag=0,count=0,max=0;
	for(i=31;i>=0;i--)
	{
		if(num>>i&1)
		{
			flag=1;
			if(count>max)
			{
				max=count;
				count=0;
			}
		}
		else
		{
			if(flag==1)
			{
				count++;

			}
		}

	}
	return max;

}

int main()
{


int num=0b10001000010;
int max =MaxZeroesBetweenOnes(num);
printf("%d\n",max);

}
