#include <stdio.h>

void selectionSort(int arr[], int size) {
	int i, start, min_index, temp;
	
	for(start = 0; start < size -1; start++) {
//		each iteration of the for loop is one pass
//		find the index of minimum element
		min_index = start;
		for (i = start + 1; i < size; i++)
			if (arr[i] < arr[min_index])
				min_index = i;
				
		temp = arr[start];
		arr[start] = arr[min_index];
		arr[min_index] = temp;
	}
	for(i=0; i<size; i++) {
		printf("%d   ", arr[i]);
	}
}

int main() {
	
	int arrSize, i;
	printf("How many elements do you want to sort? => ");
	scanf("%d", &arrSize);
	int arr[arrSize];
	for(i=0; i<arrSize; i++) {
		printf("The element %d = ", i+1);
		scanf("%d", &arr[i]);
	}
	selectionSort(arr, arrSize);
	
	return 0;
}
