/*
 ============================================================================
 Name        : School_Proj.c
 Author      : Mohab Soliman Mahmoud
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student {
                char Name[20];
                int ID;
                float Grade;
               };

int main(void) {
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		int i,n;
	        printf("how many records you want to store?! ... ");
	        scanf("%d",&n);
	        struct student Member[n];
	        printf("Enter Name, ID and Grade ... \n");

	        for(i=0; i<n; i++)
	        {
	                printf("\nEnter %d record :: \n",i+1);

	                printf("Enter Name :: ");
	                scanf("%s",&Member[i].Name);
	                printf("Enter ID. :: ");
	                scanf("%d",&Member[i].ID);
	                printf("Enter Grade :: ");
	                scanf("%f",&Member[i].Grade);

	        }
	        printf("\n\tName\tID\tGrade\t\n");
	        for(i=0; i<n; i++)
	                printf("\t%s\t%d\t%.2f\t\n", Member[i].Name, Member[i].ID, Member[i].Grade);
}
