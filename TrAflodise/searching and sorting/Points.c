#include <stdio.h>

// Returns 1 if point at index p is "less than" point at index q;
// otherwise returns 0.
// Point at index p is "less than" point at index q if the former
// has a smaller x-coordinate, or if their x-coordinates are the
// same, then the former has a smaller y-coordinate.
int lessThan(int x[], int y[], int p, int q) {
	return (x[p] < x[q]) || ( (x[p] == x[q]) && (y[p] < y[q]) );
}

// Sort points in ascending order of x-, and then y-coordinates
void sortPoints(int x[], int y[], int size) {
	int i, start, min_index, temp, noLines, j;
	for (start = 0; start < size-1; start++) {
		int initial = x[start];
		for(j=0; j<size; j++) {
			if(initial != x[j])
				noLines++;
		}
		// find the index of minimum element 
		min_index = start;
		for (i = start+1; i < size; i++)
			// check if point at index i is "less than" point at min_index
			if ( lessThan(x, y, i, min_index) ) 
				min_index = i;

		// swap minimum element with element at start index
		temp = x[start]; x[start] = x[min_index]; x[min_index]=temp;
		temp = y[start]; y[start] = y[min_index]; y[min_index]=temp;
	}
	printf("After sort: \n");
	for(i=0; i<size; i++) {
		printf("Point # %d: (%d,%d)\n", i, x[i], y[i]);
	}
	noLines = noLines / (size - 1);
	printf("Sum of lengths of vertical and horizontal lines = %d", noLines);
}

int main() {
	
	int size, i;
	printf("Enter the number of points: ");
	scanf("%d", &size);
	int x[size], y[size];
	printf("Enter x- and y-coordinates of %d points: ", size);
	for(i=0; i < size; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	sortPoints(x, y, size);
	
	return 0;
}
