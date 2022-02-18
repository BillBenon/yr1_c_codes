#include <stdio.h>
int main() {
	struct complex {
		float real;
		float complex;
	} first, second, sum;
	
	scanf("%f %f", &first.real, &first.complex);
	scanf("%f %f", &second.real, &second.complex);
	
	sum.real = first.real + second.real;
	sum.complex = first.complex + second.complex;
	
	printf("\n %f + %fj", sum.real, sum.complex);
	return 0;
}
