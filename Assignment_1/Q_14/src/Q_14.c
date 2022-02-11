/**************************************************************************************************
 Name        : ex14.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_14
 **************************************************************************************************/

#include <stdio.h>
int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    char c;

	/* Loop to print all the capital letters */
    for(c = 'A'; c <= 'Z'; ++c)
       printf("%c ", c);

    return 0;
}
