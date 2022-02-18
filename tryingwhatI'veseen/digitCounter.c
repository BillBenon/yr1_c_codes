#include <stdio.h>

int numCount(int);

int main(){
	
	int num;
	printf("Enter the number => ");
	scanf("%d", &num);
	int count = numCount(num);
	printf("The entered number has %d digit(s)", count);
	return 0;
}

int numCount(num){
	static int counter = 0;
	if(num > 0 || num < 0){
		counter++;
		numCount(num/10);
	}
	else{
		return counter;
	}
}
