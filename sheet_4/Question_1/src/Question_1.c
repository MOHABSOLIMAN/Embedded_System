/*
 ============================================================================
 Name        : Question_1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev_str(char *str,int size)
{
	int i=0,tmp;
	for(i=0;i<size/2;i++)
	{
		tmp = str[i];
		str[i]=str[size-1-i];
		str[size-1-i] = tmp;
	}
}

void print_string(char *str)
{
int i;
for(i=0;str[i];i++)
	{
	printf("%c",str[i]);
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char str[]="Ahmed salem";

	int size=sizeof(str)/sizeof(str[0]);
	printf("%s",str);
	rev_str(str,size);
	print_string(str);
	return EXIT_SUCCESS;
}
