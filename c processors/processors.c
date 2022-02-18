#include <stdio.h>
#define PI 3.14
#define MIN(a,b) ((a)<(b)?(a):(b))
#define number 12
int square = number*number;
#undef number
#define NOINPUT

int main(int agc, char *argv[]){

printf("Date is %s\n", __DATE__);
printf("File is %s\n", __FILE__);
printf("Time is %s\n", __TIME__);
printf("This is on line %d\n", __LINE__);
printf("STDC: %d\n", __STDC__);
printf("%.2f\n",PI);
printf("The minimum number between 30 and 29 is %d\n", MIN(30,29));
printf("The square root of 12 is %d\n", square);

int a = 0;
#ifndef NOINPUT   //the opposite of ifndef is ifdef which does its opposite
a = 2;
#else
printf("Enter a:");
scanf("%d", &a);
#endif // NOINPUT
printf("Value of a: %d\n", a);

printf("Program name is %s\n", argv[0]);

if(agc < 2){
    printf("No argument passed through command line.\n");
} else{
printf("First argument is: %s\n", argv[1]);
}

return 0;
}
