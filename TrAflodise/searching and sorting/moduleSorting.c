#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STR_LENGTH 7

int main(){
   int numMod,i=0,k,j,temp;
   
   printf("Enter number of modules: ");
   scanf("%d", &numMod);
   
   char modCode[numMod][STR_LENGTH],tempMod[STR_LENGTH];
   int enrolledStuds[numMod];
   
   printf("Enter module codes and student enrolment: \n");
   
   for(i=0; i<numMod; i++){
   	InputModsAndStds:
   	scanf("%s %d", modCode[i],&enrolledStuds[i]);
   	  
   	  if(strlen(modCode[i]) >7){
   	  	printf("\nModule code must not exceed 7 characters long \t Repeat again that module\n");
   	  	goto InputModsAndStds;
	  }
   }
   
   //bubble sort
   
   for(i=0; i<numMod; i++){
   	  for(j=0; j<numMod-1-i; j++){
   	  	  if(enrolledStuds[j] > enrolledStuds[j+1]){
   	  	  	temp = enrolledStuds[j];
   	  	  	strcpy(tempMod,modCode[j]);
   	  	  	enrolledStuds[j] = enrolledStuds[j+1];
   	  	  	strcpy(modCode[j],modCode[j+1]);
   	  	  	enrolledStuds[j+1] = temp;
   	  	  	strcpy(modCode[j+1],tempMod);
		  }
	  }
   }
   
   //print modules and students (are sorted)
   printf("\n\nSorted by student enrolment: \n\n");
   for(k=0; k<numMod; k++){
   	 printf("%s\t%d\n", modCode[k],enrolledStuds[k]);
   }
}
