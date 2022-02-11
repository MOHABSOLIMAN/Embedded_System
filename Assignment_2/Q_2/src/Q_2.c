/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohab Soliman
 Description : Assignment 2 - Q_2
 **************************************************************************************************/

#include <stdio.h>

void check_alphabet(char ch_in)
{
	if( ((ch_in >= 'A') && (ch_in <= 'Z')) || ((ch_in >= 'a') && (ch_in <= 'z')) )
	{
		printf("\nThe input character is Alphabet");
	}
	else
	{
		printf("\nThe input character is not Alphabet");
	}
}

int main(void) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
	char ch;
	printf("Please enter a character : ");
	scanf("%c",&ch);
	check_alphabet(ch);
	return 0;
}
