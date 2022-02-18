#include <stdio.h>
int main (){
	
	int i;
	
    char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};// Ok
    char y[6] = {'H', 'e', 'l', 'l', 'o'};// Ok
        
    char e[7] = "Ubumwe";
        
    char b[6] = "Amahoro";
    char c[6] = "Ubumwe";
        
    char *d = "UbumweBwacu";
        
    char string1[6];
         string1[6] = "Yes";
             
    char string2[6] = "Hello";
    char name[15] = "Juru";
    char string3[17] = "Juru\0Ry'\0Imana";
    
    printf("\n");
    for (i=0; i<6; i++){
        printf("%c", a[i]);
    }
    
    printf("\nThe whole word for variable b: %s ", b);// Unexpected output (6 chars for expected string are displayed + more string from other memory location
    printf("\nThe whole word for variable c: %s ", c); // Unexpected output
    printf("\nThe whole word for variable e: %s ", e); //It works correctly. The extra char created to make the string end.
    printf("\nThe whole word for variable String1: %s ", string1); // Able to compile but no output
    printf("\nThe whole word for variable String2: %s ", string2); //Only available chars are displayed. No 0s after Hello.
    printf("\nThe whole word for variable d: %s ", d); // Using pointers
    printf("\nThe whole word for variable y: %s ", y);// Printing Hello at the same time
    printf("\nRight justified |%10s|",name);// Right justified
    printf("\nLeft justified |%-10s|",name);// Left justified
    printf("\n|%s|",string3);// Fist word displayed i.e the word before the first \0. No extra space displayed
    
    string2[0] = 'L';
    printf("\nString2: %s ", string2); //First string changed to Y. Output is Yello. Don't know why it is printing jello. More research needed for codeblocks
    
	return 0;
}
