#include <stdio.h>

int sumup(int);
int powering(int, int);
int powFunc(int, int);

int main(){
	int num1, num2;
	printf("Enter the first number => ");
	scanf("%d", &num1);
	
	printf("Enter the second number => ");
	scanf("%d", &num2);
	
//	NOTE that this is for using sumup function
	int sum = sumup(num1);
	printf("The sum of %d and all the numbers below it is: %d\n", num1, sum);
	
//	NOTE that this is for calling powFunc function
	powFunc(num1, num2);
	
//	NOTE that this is for using powRecursive recursive function
	int powRecursive = powering(num1, num2);
	printf("Using recursive function, %d power %d is %d", num1, num2, powRecursive);
	
	return 0;
}

int sumup(int num1){
	if(num1 == 0)
		return 0;
	return num1+(sumup(num1-1));
}
int powering(int num1, int num2){
	if(num2 == 0){
		return 1;
	}
	return num1*powering(num1, num2-1);
}
int powFunc(num1, num2){
	int i, pow = 1;
	for(i = 0; i < num2; i++){
		pow *= num1;
	}
	printf("%d power %d is %d\n", num1, num2, pow);
}
