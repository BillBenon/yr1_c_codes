#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 30

int main() {
	int i=0, index, stdNo, j;
	char name[NAME_LENGTH];
	
	printf("Number of students in class = ");
	scanf("%d", &stdNo);
	char *nameList[stdNo];
	
	printf("Enter names: ");
	
	for(i=0; i<=stdNo; i++) {
		gets(name);
		nameList[i] = (char *) calloc(NAME_LENGTH + 1, sizeof(char));
		strcpy(nameList[i], name);
	}
	
	srand(time(NULL));
	index = rand() % stdNo + 1;
	
	char *selectedName = nameList[index];

    printf("Name selected:\n");
    printf("%s , would you please answer the question?\n", selectedName);
    
    return 0;
}

//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define MAX_STUD_COUNT 6
//void main() {
//	char *list[MAX_STUD_COUNT];
//	int i;
//	printf("Enter names: \n");
//	for(i=0;i<MAX_STUD_COUNT;i++){
//		scanf("%s", &list[i]);
//	}
//	srand(time(NULL));
//	int rand_n = rand()%6;
//	printf("%s, would you please answer the question?", &list[rand_n]);
//	
//	return 0;
//}
