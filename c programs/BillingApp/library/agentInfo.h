#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
struct Agent{
	int id;
	char firstName[40];
	char lastName[40];
	char password[40];
	char province[40];
	char district[40];
	char sector[40];
};

/*
	function to show agent information
*/
 int agentInfo(int AgentID,char AgentFirstName[40],char AgentLastName[40]){
 	struct Agent agent[50];
 	printf("\n");
 	FILE *users;
 	users=fopen("storage/users.txt","r");
 	int d=0;
 	//here let's assume that agents can not exceed 50
 	while(d<50){
 		fscanf(users,"%d\t%s\t%s\t%s\t%s\t%s\t%s\n\n",&agent[d].id,agent[d].firstName,agent[d].lastName,agent[d].password,agent[d].province,agent[d].district,agent[d].sector);
 		if(agent[d].id==AgentID && strcmp(agent[d].firstName,AgentFirstName)==0 && strcmp(agent[d].lastName,AgentLastName)==0){
 			//show agent's information
 			printf("\t\t\t\t-------------------------------------\n");
 		   printf("\t\t\t\t|         YOUR INFORMATION          |\n");
 			printf("\t\t\t\t-------------------------------------\n");
 			printf("\t\t\t\t| First name:    %s                 \n",agent[d].firstName);
 			printf("\t\t\t\t| Last name:     %s                 \n",agent[d].lastName);
 			printf("\t\t\t\t| Province:      %s                 \n",agent[d].province);
 			printf("\t\t\t\t| District:      %s                 \n",agent[d].district);
 			printf("\t\t\t\t| Sector:        %s                 \n",agent[d].sector);
 			printf("\t\t\t\t-------------------------------------\n");
 			d=55;
		 }
 		d++;
	 }
 	printf("\n");
 	fclose(users);
 }
