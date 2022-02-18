#include <stdio.h>

void decimalToBinary(int);

void main(){
	int n;
	printf("Enter a number to be converted: ");
	scanf("%d", &n);
	decimalToBinary(n);
}

void decimalToBinary(int num){
	int a[20], i, reminder;
	for(i=0; num!=0; i++){
		reminder = num%2;
		a[i] = reminder;
		num /=2;
	}
	for(i=i-1; i>=0; i--){
		printf("%d", a[i]);
	}
}
