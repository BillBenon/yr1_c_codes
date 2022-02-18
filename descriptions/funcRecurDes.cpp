#include <stdio.h>

int add(int, int);     //function prototype.  Don't forget to mention the prototype of a function in case the function defined after main method.
                       //No need to mention the names of parameters.

int main(){
	printf("Enter two numbers separated with single space: ");
	int x,y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	int sum = add(x, y);  //x and y are Arguments or actual parameters  //Function call
	
	printf("Sum is %d", sum);
	return 0;
}

int add(int a, int b){   // a and b are Parameters or formal parameters  //Actual definition of the function
    return a+b;
}

//Parameter is the variable in the declaration and definition of the function
//Argument is the actual value of the parameter that gets passed to the function
//Note: Parameter is also called as Formal parameter and Argument is also called as Actual Parameter
