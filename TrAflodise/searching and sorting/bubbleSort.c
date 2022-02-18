#include <stdio.h>

// To sort arr in increasing order
void bubbleSort(int arr[], int size) {
	int i, limit, temp;

	for (limit = size-2; limit >= 0; limit--) {
	//limit is where the inner loop variable i should end

		for (i=0; i<=limit; i++) {
			if (arr[i] > arr[i+1]) { //swap arr[i] with arr[i+1]
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
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
	bubbleSort(arr, arrSize);
	
	return 0;
}
