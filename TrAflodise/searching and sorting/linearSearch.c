#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
	int i;
	for(i=0; i<size; i++) {
		if(key == arr[i])
			return i+1;
	}
	return -1;
}

int main() {
	int arr[] = {4,12,63,95, 63, 43, 56, 34, 90, 53, 14, 23, 21, 92, 17, 18, 54, 32, 10, 34};
	int arrSize = sizeof(arr)/4;
	int key;
	printf("Enter the element to search => ");
	scanf("%d", &key);
	int results = linearSearch(arr, arrSize, key);
	printf("%d", results);
	
	return 0;
}
