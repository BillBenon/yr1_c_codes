#include <stdio.h>

#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid = (low + high)/2;
    while ((low <= high) && (arr[mid] != key)) {
        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high)/2;
    }
    if (low > high) return -1;
    else return mid;
}
int main(){
    int arr[] = {43, 64, 74, 72, 62, 90, 23, 63, 12, 89, 16, 90};
    int arrSize = sizeof(arr)/4;
    int key;
    printf("Enter the number to search in our array => ");
    scanf("%d", &key);
    int result =binarySearch(arr, arrSize, key);
    printf("The index of %d in our array is %d", key, result);
    return 0;
}

//#include <stdio.h>
//#define MAX_ELEMENTS 10
//
//void selectionSort(int [], int, int (int,int));
//void scanArray(int [], int);
//void printArray(int [], int);
//int leq(int, int) ;
//int geq(int,int) ;
//
//int main(void) {
//	int list[MAX_ELEMENTS];
//	
//	scanArray(list, MAX_ELEMENTS);
//	
//	printf("Before sort:\n");
//	printArray(list, MAX_ELEMENTS);
//	
//	selectionSort(list, MAX_ELEMENTS, &geq);
//	
//	printf("After sort:\n");
//	printArray(list, MAX_ELEMENTS);
//	
//	return 0;
//}
//
//// To sort arr in increasing order
//void selectionSort(int arr[], int size, int compare(int,int)) {
//	int i, start, min_index, temp;
//	
//	for (start = 0; start < size-1; start++) {
//		// each iteration of the for loop is one pass
//		
//		// find the index of minimum element
//		min_index = start;
//		for (i = start+1; i < size; i++)
//			if (compare(arr[i], arr[min_index]))
//				min_index = i;
//				
//		// swap minimum element with element at start index
//		temp = arr[start];
//		arr[start] = arr[min_index];
//		arr[min_index] = temp;
//	}
//}
//
//int leq(int a, int b) {
//	return (a <= b) ;
//}
//
//int geq(int a, int b) {
//	return (a >= b) ;
//}
//
//// To read values into arr
//void scanArray(int arr[], int size) {
//	int i;
//	
//	printf("Enter %d values: ", size);
//	for (i=0; i<size; i++)
//		scanf("%d", &arr[i]);
//}
//
//// To print values of arr
//void printArray(int arr[], int size) {
//	int i;
//	for (i=0; i<size; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
