#include <stdio.h>

void minMaxFin(int a[], int arrSize, int *min, int *max) {
	int i;
	max = min = &a[0];
	for(i = 1; i < arrSize; i++){
		if(a[i] < *min)
			min = &a[i];
		if(a[i] > *max)
			max = &a[i];
	}
	printf("The minimum is %d and the maximum is %d", *min, *max);
}

int main() {
	int a[] = {94, 84, 99, 89, 85, 81, 76, 68, 90, 95, 64, 78, 62, 92, 79, 92, 87, 79, 83, 97};
	int i;
	int min, max;
	int arrSize = sizeof(a)/sizeof(a[0]);
	minMaxFin(a, arrSize, &min, &max);
	
	return 0;
}
