/*
 ============================================================================
 Name        : Q4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(char * str,int len)
{
	int i=0,j=len-1,temp;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j++;
	}
}

int IntToStr(int x,char * str,int y)
{
	int i=0;
	while(x)
	{
		str[i++] = (x%10)+'0';
		x=x/10;
	}
	while(i<y)
		str[i++]='0';

	swap(str,i);
	str[i]='0';
	return i;
}

void floa(float n,char * str, int afterpoint)
{
	int int_part  = (int)n;
	float f_part = n - (float)int_part;   /* 233.007 >>> 233.007 - 233 = .007*/
	int i = IntToStr(int_part,str,0);
	if(afterpoint != 0)
	{
		str[i] = '.';
		f_part = f_part*pow(10,afterpoint);
		IntToStr((int)f_part, str + i + 1, afterpoint);
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char res[20];
	float n = 233.007;
	floa(n,res,4);
	printf("%s", res);
	return EXIT_SUCCESS;
}
