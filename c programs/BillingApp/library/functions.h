#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
//this file contains main different functions
//including mainProgram.h which contains main whole application
#include "mainProgram.h"

// structure to collect information of a User
struct User{
	int id;
	char firstName[40];
	char lastName[40];
	char password[40];
	char province[40];
	char district[40];
	char sector[40];
};

// function to exit the application
int exitProgram(){
	system("color 07");
	printf("\n\n\t\t\tGood bye!! Thanks for using this application.\n\n");
}

//function to create account
int newAccount(){
	srand(time(0)); 
	int randId;
	randId= rand();
	int userID=randId;
	struct User newUser;
	FILE *ptr;
	ptr=fopen("storage/users.txt","a");
	system("color 07");
	printf("\n\t\t\t CREATE NEW AGENT ACCOUNT");
	printf("\n\t\t\t--------------------------\n\n");
	printf("\t\t\tEnter your first name:");
	scanf("%s",newUser.firstName);
	printf("\t\t\tEnter your last name:");
	scanf("%s",newUser.lastName);
	printf("\t\t\tEnter new password:");
	scanf("%s",newUser.password);
	printf("\t\t\tEnter your province:");
	scanf("%s",newUser.province);
	printf("\t\t\tEnter your district:");
	scanf("%s",newUser.district);
	printf("\t\t\tEnter your sector:");
	scanf("%s",newUser.sector);
	if(
	fprintf(ptr,"%d\t%s\t%s\t%s\t%s\t%s\t%s\n\n",userID,newUser.firstName,newUser.lastName,newUser.password,newUser.province,newUser.district,newUser.sector)
	){
		printf("\n\n\t\t\t WELCOME! you are now registered!");
	}
	fclose(ptr);
}


//function to allow login
int login(){
	struct User login[100];
	char loginpass[40];
	char stNmame[40];
	char lstName[40];
	FILE *fptr;
	fptr=fopen("storage/users.txt","r");
	printf("\n\n\t\t\tLOGIN TO YOUR ACCOUNT\n");
	printf("\t\t\t========================\n\n");
	printf("\t\t\tEnter your password:");
	scanf("%s",loginpass);
	printf("\t\t\tEnter first name:");
	scanf("%s",stNmame);
	printf("\t\t\tEnter last name:");
	scanf("%s",lstName);
	int i=0;
	int a=0;
	//here we assume that agents can not exceed 50
	while(a==0 && i<50){
		fscanf(fptr,"%d\t%s\t%s\t%s\t%s\t%s\t%s\n\n",&login[i].id,&login[i].firstName,&login[i].lastName,&login[i].password,&login[i].province,&login[i].district,&login[i].sector);
		if(strcmp(login[i].password,loginpass) == 0 && strcmp(login[i].firstName,stNmame) == 0 && strcmp(login[i].lastName,lstName) == 0){
			//clearing screen and allowing the user to login by calling mainApp() from mainApp.h
				system("cls");
				system("color 07");
				mainApp(login[i].id,stNmame,lstName);
			//stopping search of user
			a=a+2;
			i=55;
		}
		if(i==49){
			printf("\n\n\t\t\tSORRY! Account not found!");
		}
		i++;
	}
	fclose(fptr);
}
