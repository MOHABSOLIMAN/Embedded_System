/*
 ============================================================================
 Name        : AssingmentQ(10).c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Sum Of Number Of Digits
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
	    int n,sum=0;
	    int count = 0;
	    while(1)
	    {
	    printf("Enter an integer: ");
	    scanf("%d", &n);

	    while (n != 0) {
	    	// if you started with division to count the digits you u will lose the first digit
	    	count=n%10;
	        //++count;
	        sum+=count;
	        n=n /= 10;
	    }

	    printf("Number of digits: %d \n", sum);
	}
}
