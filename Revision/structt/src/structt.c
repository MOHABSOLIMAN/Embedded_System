/*
 ============================================================================
 Name        : structt.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct OP{
    int Mul;
    int Sum;
};

struct OP s1(int x , int y ){
    struct OP s;

    s.Mul = x*y;
    s.Sum = x+y;

    return s;
}

int main(void) {
	struct OP m=s1(5,7);
	printf("%d  %d",m.Mul,m.Sum);
}
