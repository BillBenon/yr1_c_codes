/*
this program  will create prices file contents
*/
#include <time.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct Price{
	int id;
	int categoryId;
	int price;
};
 void main(){
 	struct Price price;
 	FILE *fptr;
 	fptr=fopen("../storage/prices.txt","a");	
	int a=1;
	do{
		if(a==1){
		printf("\n\n\t\t\tEnter price id:");
		scanf("%d",&price.id);
		printf("\t\t\tEnter category_id:");
		scanf("%d",&price.categoryId);
		printf("\t\t\tEnter price:");
		scanf("%d",&price.price);
		fprintf(fptr,"%d\t\t%d\t\t%d\n\n",price.id,price.categoryId,price.price);
		printf("\n\n\t\t\tenter 1 to cintinue or 2 to exit:");
		scanf("%d",&a);	
		}else{
			printf("\t\t\tGood bye!");
		}
		
	}while(a==1);
	fclose(fptr);
 }
