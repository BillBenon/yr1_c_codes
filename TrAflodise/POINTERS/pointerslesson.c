#include <stdio.h>

int main() {
	int *p = NULL;
	printf("The value inside variable p is: %x\n", p);
	
	void *q = NULL; 	//void pointer
	printf("The size of pointer is: %d\n",sizeof(q));
	
//	int *r;       // wild pointer
//	printf("%d", *r);                     // be careful while working with this kind of pointers

	/* Declare and initialize an int variable */
	int var = 1;
	/* Declare a pointer to int */
	int *ptr;
	/* Initialize ptr to point to var */
	ptr = &var;
	/* Access var directly and indirectly */
	printf("\nDirect access, var = %d", var);
	printf("\nIndirect access, var = %d", *ptr);
	/* Display the address of var two ways */
	printf("\n\nThe address of var = %d", &var);
	printf("\nThe address of var = %d\n", ptr);
	/*change the content of var through the pointer*/
	*ptr=48;
	printf("\nIndirect access, var = %d", *ptr);
	
	return 0;
}
