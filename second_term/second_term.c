#include <stdio.h>

int addition(int var1, int var2){
return var1 + var2;
}
int subtraction(int var1, int var2){
return var1-var2;
}
int division(int var1, int var2){
return var1/var2;
}
int multiplication(int var1, int var2){
return var1*var2;
}

int main() {

int var1 = 0;
int var2 = 0;
int sum = 0;
int option;
char operation;
do{
printf("Enter the first number: ");
scanf("%d", &var1);

printf("Enter the operand (+, -, /, *): ");
scanf(" %c", &operation);

printf("Enter the second number: ");
scanf("%d", &var2);

if(operation =='+'){
    printf("%d\n", addition(var1, var2));
}
else if(operation =='-'){
    printf("%d\n", subtraction(var1, var2));
}
else if(operation =='/'){
    printf("%d\n", division(var1, var2));
}
else if(operation =='*'){
    printf("%d\n", multiplication(var1, var2));
} else{
    printf("Invalid operation.\n");
}

printf("Press Y to continue or N to exit\n");
scanf("%d",&option);
option = getchar();
}
while(option =='Y' || option =='y');
return 0;
}
