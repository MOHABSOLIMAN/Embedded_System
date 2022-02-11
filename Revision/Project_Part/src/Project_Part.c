/**************************************************************************************************
 Name        : ex5.c
 Author      : Mohab Soliman Mahmoud
 Description : Structs & functions
 **************************************************************************************************/

#include <stdio.h>

#define MAX_NUM_STUDENTS 3

struct student
{
  char name[30];
  int age;
  float grade;
};

void scanStudentsInformation(struct student *st_ptr, int size);
void printStudentsInformation(struct student *st_ptr, int size);
int SearchStudentAge(struct student *st_ptr, int size);

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int max;
	struct student students[MAX_NUM_STUDENTS];
    scanStudentsInformation(students,MAX_NUM_STUDENTS);
   // printStudentsInformation(students,MAX_NUM_STUDENTS);
    max= SearchStudentAge(students,MAX_NUM_STUDENTS);
    printf("Max Age Student information: \n");
    printStudentsInformation(students,max);
}

void scanStudentsInformation(struct student *st_ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
    	printf("Please Enter Name, Age and Grade for student number %d :",i+1);
    	scanf("%s %d %f",st_ptr->name,&(st_ptr->age),&(st_ptr->grade));
    	printf("\n");
    	st_ptr++;
    }
}

void printStudentsInformation(struct student *st_ptr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Student Number %d Information : \n",i+1);
		printf("Name : %s \n",st_ptr->name);
		printf("Id : %d \n",st_ptr->age);
		printf("Grade : %f \n",st_ptr->grade);
		st_ptr++;
	}
}

int SearchStudentAge(struct student *st_ptr, int size)
{
	 int i;
	 int max =st_ptr->age;

	 for (i = 0;i < size; i++)
	     if ((st_ptr[i].age) > max)
	        max = (st_ptr[i].age);

	 return max;
}

