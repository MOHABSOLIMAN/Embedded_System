/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long fibonacci( long n )
{
	if ( n == 0 || n == 1 )
	{
		return n;
	}
	else
	{
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	long result;
	long x;

		printf( "Enter an integer: " );
		scanf( "%ld", &x );

		result = fibonacci( x );

		printf( "Fibonacci( %ld ) = %ld\n", x, result );
		return 0;
}
