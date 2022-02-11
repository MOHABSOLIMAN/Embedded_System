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

void upper_lower(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if((str[i] > 65) && (str[i] < 90))
		{
			str[i] += 32;
		}
		i++;
	}
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

	char str[100];
	scanf("%s ",str);

	upper_lower(str);

	printf("%s",str);

	return EXIT_SUCCESS;
}
