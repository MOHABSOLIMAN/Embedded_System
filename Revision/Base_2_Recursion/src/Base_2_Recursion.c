/*
 ============================================================================
 Name        : Base_2_Recursion.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int log2(int num)
{
      if(num==1)
           return 0;
      else if(num==0)
    	  return -1;
      return 1 + log2(num/2);
}

int main(void) {
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		 int num;
		 while(1){
		 printf("Enter a number for Base_2: \n ");
		 scanf("%d",&num);

	     printf("Value of log base 2 of %d = %d\n",num,log2(num));
}
}
