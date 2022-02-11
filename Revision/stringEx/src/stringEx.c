/*
 ============================================================================
 Name        : stringEx.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int toString(char a[]) {
	int c, sign, offset, n;

	if (a[0] == '-') {
		sign = -1;
	}

	if (sign == -1) {
		offset = 1;
	}
	else {
		offset = 0;
	}

	n = 0;

	for (c = offset; a[c] != '\0'; c++) {
		n = n * 10 + a[c] - '0';
	}

	if (sign == -1) {
		n = -n;
	}

	return n;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char a[100];
	int n;

	while(1){


		printf("Input a valid string to convert to integer\n");
		scanf("%s", a);

		n = toString(a);

		printf("String  = %s\nInteger = %d\n", a, n+5);
	}
}
