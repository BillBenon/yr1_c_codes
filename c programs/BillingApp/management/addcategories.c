/*
	this file is used to create customers categories
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include "files.h"
struct Category{
	int id;
	char description[100];
	char from[20];
	char to[20];
};
void main(){
	struct Category category;
	FILE *fptr;
 	fptr=fopen("../storage/customersCategories.txt","a");	
	int a=1;
	do{
		if(a==1){
		printf("\n\n\t\t\tEnter category id:");
		scanf("%d",&category.id);
		printf("\t\t\tEnter category name:");
		scanf("%s",category.description);
		printf("\t\t\tEnter where it starts(from):");
		scanf("%s",category.from);
		printf("\t\t\tEnter where it ends(to):");
		scanf("%s",category.to);
		fprintf(fptr,"%d\t%s\t%s\t%s\n\n",category.id,category.description,category.from,category.to);
		printf("\n\n\t\t\tenter 1 to cintinue or 2 to exit:");
		scanf("%d",&a);	
		}else{
			printf("\t\t\tGood bye!");
		}
		
	}while(a==1);
	fclose(fptr);
}
