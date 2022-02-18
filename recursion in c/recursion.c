#include <stdio.h>

/*int sum(int );*/
int product(int n);

int main(){

int n;
printf("Enter the number: ");
scanf("%d",&n);
int result = product(n);
printf("The sum of %d and all numbers below it is %d",n,result);

return 0;
}
/*
int sum(int n){
if(n<0)
    return 0;
if(n!=0)
    return n + sum(n-1);
else
    return n;
}
*/

int product(int n){

if(n<0)
    return -1;
if(n==0)
    return 1;
return (n*product(n-1));

}
