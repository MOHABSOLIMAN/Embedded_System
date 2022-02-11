/*
 ============================================================================
 Name        : Question.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

char check_repeated(char* arr);

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char str1[]="hello world";
	char str2[]="Mohab";
	char ret1,ret2;

	ret1 = check_repeated(str1);
	ret2 = check_repeated(str2);

	printf("the first array : %d \n",ret1);
	printf("the first array : %d",ret2);

	return EXIT_SUCCESS;
}

char check_repeated(char* arr)
{
	int i=1,j,flag;
	while(arr[i] !='\0')
	{
		j=i-1;
		printf(" i = %d \n",i);
			if (arr[i] == arr[j])
			{
				flag = true;
				break;
			}
			else
			{
				flag = false;
			}
		i++;
	}
	return flag;
}
