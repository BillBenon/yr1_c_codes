#include <stdio.h>

typedef struct {
	float real;
	float imag;
} _COMPLEX;
void swap(_COMPLEX a, _COMPLEX b) {
	_COMPLEX tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("(%f, %f)\n", a.real, a.imag);
	printf("(%f, %f)\n", b.real, b.imag);
}

void print(_COMPLEX a) {
	printf("(%f, %f)\n", a.real, a.imag);
}
int main() {
	_COMPLEX x = {4.0, 5.0}, y={10.0, 15.0};
	print(x);
	print(y);
	swap(x, y);
//	print(x);
//	print(y);
}
