#include <stdio.h>

int powering(signed int n, signed int power){
	if(power == 0)
		return 1;
	return n*powering(n, power-1);
}

int main(){
	int num, pow;
    printf("Enter the number => ");
	scanf("%d", &num);
	printf("Enter the power => ");
	scanf("%d", &pow);
	int result = powering(num, pow);
	printf("The power of %d is %d", num, result);
}
