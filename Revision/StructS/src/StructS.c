/*
 ============================================================================
 Name        : StructS.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StructS.h"



typedef unsigned long long   u64;
typedef unsigned long long*  pu64;




typedef struct student
{
    char name[20];
    int age;
    char grade;


}std_t;



void student_print(std_t s);
void student_printByRef(const std_t* ps);
std_t student_scan(void);
void student_scanByRef(std_t*ps);

void string_scan(char *str)
{
    int i;
    scanf("%c",&str[0]);
    for(i=0;str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]='\0';
}

void student_print(std_t s)
{
    printf("name:%9s   age:%d   grade:%c\n",s.name,s.age,s.grade);

}


void student_printByRef(const std_t* ps)
{
   pu64 p1,p2,p3;
    printf("name:%9s   age:%d   grade:%c\n",(*ps).name,ps->age,(*ps).grade);

}

std_t student_scan(void)
{
    std_t s;
    string_scan(s.name,20);
    scanf("%d",&s.age);
    fflush(stdin);
    scanf("%c",&s.grade);
    return s;


}
void student_scanByRef(std_t*ps)
{

    string_scan(ps->name,20);
    scanf("%d",&ps->age);
    fflush(stdin);
    scanf("%c",&ps->grade);

}




int main(void) {

}
