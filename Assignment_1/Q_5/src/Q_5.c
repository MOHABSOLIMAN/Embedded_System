/**************************************************************************************************
 Name        : ex5.c
 Author      : Mohab Soliman
 Description : Assignment 1 - Q_5
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
    char c;
    printf("Enter a character: ");

    /* Reads character input from the user */
    scanf("%c", &c);

    /*
       %d displays the integer value of a character
       %c displays the actual character
    */
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
