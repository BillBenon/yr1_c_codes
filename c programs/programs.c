#include <stdio.h>
#include <stdlib.h>

/*long factorial(int n){
if(n == 0)
    return 1;
else
    return (n * factorial(n-1));
}*/

/*void printFibonacci(int n){
static int a = 0, b= 1, c;
if(n > 0){
    c = a + b;
    a = b;
    b = c;
    printf(" %d", c);
    printFibonacci(n-1);
}
}*/

int main() {

//THIS IS A PROGRAM OF FIBONACCI SERIES WITHOUT RECURSION
/*int a = 0, b = 1, c, i, number;
printf("Enter the number of elements:");
scanf("%d", &number);
printf("\n%d %d", a,b);
for(i = 2;i < number; ++i){
    c = a + b;
    printf(" %d", c);
    a = b;
    b = c;
}*/
//FOR THIS, IS A PROGRAM OF FIBONACCI SERIES WTIH RECURSION; THE FUNCTION IS ABOVE MAIN FUNCTION
/*int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Fibonacci series: ");
printf("%d %d", 0,1);
printFibonacci(n-2);*/

//THIS IS A PROGRAM TO CHECK WHETHER THE NUMBER IS A PRIME NUMBER OR NOT
/*int n,i,m = 0, flag = 0;
printf("Enter the number to check prime: ");
scanf("%d", &n);
m = n/2;
for(i = 2;i < m;i++){
    if(n%i == 0){
        printf("Number is not prime");
        flag =1;
        break;
    }
}
if(flag == 0)
    printf("Number is prime");*/

//THIS IS A PROGRAM TO CHECK WHETHER THE NUMBER IS A PALINDROME OR NOT
/*int n,r,sum=0,temp=0;
printf("Enter the number= ");
scanf("%d", &n);
temp = n;
while(n > 0){
    r = n%10;
    sum = (sum*10)+r;
    n = n/10;
}
if(temp == sum)
    printf("Palindrome number.");
else
    printf("not palindrome number.");*/

//THIS IS A FACTORIAL PROGRAM BY  USING LOOP
/*int i,fact=1,number;
printf("Enter a number: ");
scanf("%d", &number);
for(i=1;i<=number;i++){
    fact = fact*i;
}
printf("Factorial of %d is %d", number,fact);*/
//THIS IS A FACTORIAL PROGRAM BY USING RECURSION AND THERE IS ITS LONG FACTORIAL BEFORE THE MAIN
/*int number;
long fact;
printf("Enter the number: ");
scanf("%d", &number);
fact = factorial(number);
printf("Factorial of %d is %ld", number, fact);*/

//THIS IS AN ARMSTRONG NUMBER CHECKER PROGRAM
/*int n,r,sum=0,temp;
printf("Enter the number= ");
scanf("%d", &n);
temp = n;
while(n > 0){
    r = n%10;
    sum = sum+(r*r*r);
    n = n/10;
}
if(temp == sum)
    printf("Armstrong number");
else
    printf("Not arm strong number");*/

//THIS IS A PROGRAM FOR SUMING DIGITS OF A NUMBER
/*int n, sum=0, m;
printf("Enter a number: ");
scanf("%d", &n);
while(n>0){
    m = n%10;
    sum = sum+m;
    n=n/10;
}
printf("Sum of digits is= %d", sum);*/

/*int n,reverse=0,rem;
printf("Enter a number: ");
scanf("%d", &n);
while(n!=0){
    rem = n%10;
    reverse = reverse*10 + rem;
    n/=10;
}
printf("Reversed number is: %d", reverse);*/

//THIS IS A PROGRAM THAT SWAPS USING + AND -
/*int a=10, b=20;
printf("Before swap, a=%d b=%d", a,b);
/*a=a+b;
b=a-b;
a=a-b;*/      //BY USING * AND /
/*a=a*b;
b=a/b;
a=a/b;
printf("\nAfter swap, a=%d b=%d", a,b);*/

//PRINTING HELLO WORLD WITHOUT SEMICOLONS
/*if(printf("hello Mr. Bill")){}
switch(printf("\nhello again Mr. Bill")){}
while(!printf("\nAnd again Mr. Bill")){}*/

//MATRIX MULTIPLICATION IN C
/*int a[10][10], b[10][10], mul[10][10], r,c,i,j,k;
printf("Enter the number of row= ");
scanf("%d", &r);
printf("Enter the number of column= ");
scanf("%d", &c);
printf("Enter the first matrix element=\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d", &a[i][j]);
    }
}
printf("Enter the second matrix element=\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d", &b[i][j]);
    }
}
printf("Multiply of the matrix=\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        mul[i][j]=0;
        for(k=0;k<c;k++){
            mul[i][j] += a[i][k]*b[k][j];
        }
    }
}
//now, let's print the results
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\t", mul[i][j]);
    }
    printf("\n");
}*/

//THIS IS A PROGRAM FOR CHANGING DECIMAL NUMBERS INTO BINARY
/*int a[10], n, i;
printf("Enter the number to convert: ");
scanf("%d", &n);
for(i=0;n>0;i++){
    a[i]=n%2;
    n=n/2;
}
printf("Binary of given number is= ");
for(i=i-1;i>=0;i--){
    printf("%d", a[i]);
}*/

//THIS IS A PROGRAM FOR CONVERTING NUMBER INTO CHARACTERS
/*long int n,sum=0,r;
printf("Enter the number= ");
scanf("%ld", &n);
while(n>0){
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
}
n=sum;
while(n>0){
    r=n%10;

switch(r){
case 1:
    printf("one ");
    break;
case 2:
    printf("two ");
    break;
case 3:
    printf("three ");
    break;
case 4:
    printf("four ");
    break;
case 5:
    printf("five ");
    break;
case 6:
    printf("six ");
    break;
case 7:
    printf("seven ");
    break;
case 8:
    printf("eight ");
    break;
case 9:
    printf("nine ");
    break;
case 0:
    printf("zero ");
    break;
default:
    printf("tttt ");
    break;
}
n = n/10;
}*/

//THIS PROGRAM PRINTS ALPHABET TRIANGLE
/* int ch=65;
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf("%c",--ch);
        printf("\n");
        ch=65;
    }*/

//FOR THIS PROGRAM, PRINTS NUMBER TRIANGLE
/*int i,j,k,l,n;
printf("Enter the range= ");
scanf("%d", &n);
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("%d", k);
    }
    for(l=i-1;l>=1;l--){
        printf("%d", l);
    }
    printf("\n");
}*/

//THIS IS PROGRAM IS TO PRINT FIBONACCI TRIANGLE
int a=0,b=1,i,c,n,j;
printf("Enter the limit= ");
scanf("%d", &n);
for(i=1;i<=n;i++){
    a=0;
    b=1;
    printf("%d\t", b);
    for(j=1;j<i;j++){
        c=a+b;
        printf("%d\t", c);
        a=b;
        b=c;
    }
    printf("\n");
}

return 0;
}
