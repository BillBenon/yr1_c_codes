#include <stdio.h>

int fibonacciNums(i) {
	if(i == 0){
		return 0;
	}
	if(i == 1){
		return 1;
	}
	return fibonacciNums(i-2) + fibonacciNums(i - 1);
}


int main(){
	int i;
	char nums[1];
	printf("Enter the number of numbers to print => ");
	scanf("%s", &nums);
	int numFinal = atoi(nums);
	if(numFinal == 0){
		printf("Not a number you inputed");
	}
	for(i = 0; i < numFinal; i++){
	printf("%d ", fibonacciNums(i));
	}
	
	return 0;
}
