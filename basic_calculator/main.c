#include <stdio.h>
#include <stdlib.h>

int main()
{
double num1;
double num2;
char oper;

printf("Enter the first number: ");
scanf("%lf", &num1);
printf("Here are the available operators: +, -, /, and *\n");
printf("Enter the operator: ");
scanf(" %c", &oper);
printf("Enter the second number: ");
scanf("%lf", &num2);

if(oper == '+'){
    printf("%f", num1+num2);
} else if(oper == '-'){
    printf("%f", num1-num2);
} else if(oper == '/'){
    printf("%f", num1/num2);
} else if(oper == '*'){
    printf("%f", num1*num2);
} else{
    printf("Invalid operator");
}

    return 0;
}
