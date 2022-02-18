// Pointers
// Definition: Pointers (pointer variables) are special variables that are used to store addresses rather than values

// Examples of using pointers

#include <stdio.h>

int main(){
	
	int z = 20;         /*actual variable declaration*/
	int *px;            /*pointer variable declaration*/
	
	px = &z;            /*store address of z in pointer variable*/
	
	printf("Address of z variable: %p\n", &z);
	
	/* address stored in pointer variable*/
	printf("Address stored in px variable: %p\n", px);
	/*access the value using the pointer*/
	printf("Value of *px varable: %d\n", *px);    //output: 20
	
	return 0;
}
