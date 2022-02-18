#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
}; 
int main() {
	// allocate 3 nodes in the heap memory
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
	struct Node* forth = (struct Node*)malloc(sizeof(struct Node));
	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second
	second->data = 2; // assign data to second node
	second->next = third;
	third->data = 3; // assign data to third node
	third->next = forth;
	forth->data = 4; // assign data to forth node
	forth->next = NULL;
	// Traversal happens bellow:
	// This consist in printing the contents of linked list starting from the first node
	while (head != NULL) {
		printf(" %d ", head->data);
		head = head->next;
	}
	return 0;
}
