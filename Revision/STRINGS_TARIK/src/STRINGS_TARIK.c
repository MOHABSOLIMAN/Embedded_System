/*
 ============================================================================
 Name        : STRINGS_TARIK.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void string_copy(char s1[],char s2[])
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]=s2[i];
}

int string_length(char s1[])
{
	int i=0,count=0;
	while(s1[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}

void string_comp_length(char s1[],char s3[])
{
	if(string_length(s1)>string_length(s3))
	{
		printf("string(1) is larger than string(2) \n");
	}
	else
		printf("string(2) is larger than string(1) \n");
}

/*void string_comp(char s1[],char s2)
{
	int i=0,found=0;
	while((s1[i]!='\0')&&(s2[i]!='\0'))
	{
		if((s1[i]!='/0'&&s1[i]!=' '&&s1[i]!='.')&&(s2[i]!='/0'&&s2[i]!=' '&&s2[i]!='.'))
		{
		if(s1[i]==s2[i])
		{
			++found;
			i++;
		}
		else
		{

		}
		}
	}
}*/

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char s1[14]="ahly club",s3[]="embedded qlwe klqwje";
	//int x;
	const int y=10;
	int *ptr_y=&y;
	*ptr_y=100;
	printf("%d    %p    %d",y,ptr_y,*ptr_y);

	//string_copy(s1,s3);
	//puts(s1);
	//x=string_length(s1);
	//printf("str_length=%d \n",x);
	//string_comp_length(s1,s3);
}
