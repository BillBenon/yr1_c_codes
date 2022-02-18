#include <stdio.h>

int main(){
	
	int array[100], n, c, d, swap;
	
	printf("Enter the number of elements to sort: ");
	scanf("%d", &n);
	printf("Enter %d integers to sort by leaving only space between each element => \n", n);
	
	for(c = 0; c < n; c++)
		scanf("%d", &array[c]);
	for(c = 0; c < n-1; c++){
		for(d = 0; d < n-c-1; d++){
			if(array[d] > array[d+1]){
				swap = array[d];
				array[d] = array[d+1];
				array[d+1] = swap;
			}
		}
	}
	printf("The sorted array in ascending order => \n");
	for(c = 0; c < n; c++){
		printf("%d ", array[c]);
	}
	
	return 0;
}
