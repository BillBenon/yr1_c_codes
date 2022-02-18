#include <stdio.h>

int a;
int b;

int multiply(int x, int y);

int add(int k, int l){
int sum = k+ l;
return sum;
}

int main(){
a=5; b=7;
int sum = add(a, b);
printf("The sum is %d\n", sum);
multiply(4, 5);
return 0;
}
int multiply(int a, int b){
int product;
product = a*b;
printf("The product is %d\n", product);
}
