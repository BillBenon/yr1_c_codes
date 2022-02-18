#include <stdio.h>
#include <stdlib.h>



int main(){
//printf("Hello World of C language\nlove you much");
/*
int number;


printf("Enter a number:");
scanf("%d",&number);

printf("The cube of %d is %d\n",number,number*number*number);
*/
/*
char name[20];

printf("What's your name?\n ");
fgets(name, 20, stdin);

printf("Your name's: %s",name);
*/
/*
char name[20];

printf("What's your name?\n ");
scanf("%s", &name);

printf("Your name's: %s",name);
*/
/*int x=0,y=0,result=0;

printf("Enter the first number:");
scanf("%d",&x);

printf("Enter the second number:");
scanf("%d",&y);

//result=x+y;
//printf("The sum of %d and %d is: %d",x,y,result);
//printf("Answer:%d", x+y);
*/

/*
char color[20];
char bestColor[20];
char celebrity[20];

printf("Write any color:");
gets(color);
printf("Your favorite color is:");
gets(bestColor);
printf("Your celebrity is:");
gets(celebrity);

printf("Rose flowers look %s\n", color);
printf("but I love %s color\n", bestColor);
printf("And I love ");
puts(celebrity);
*/

/*
float billNumbers[] = {5, 9, 14, 20, 26, 38, 40};
printf("%f", billNumbers[5]);
*/


//int number= 0;
/*
printf("Enter a number:");
scanf("%d", &number);

if(number%2==0){
    printf("%d is even number", number);
}
else{
    printf("%d is an odd number", number);
}*/
/*
printf("Enter a number:");
scanf("%d", &number);
if(number==10){
    printf("Number is equal to 10");
}
else if(number==50){
    printf("Number is equal to 50");
}
else if(number==100){
    printf("Number is equal to 100");
}
else{
    printf("Number is not equal to 10, 50 or 100");
}*/
/*
printf("Enter a number:");
scanf("%d", &number);
switch(number){
case 10:
    printf("Number is equal to 10");
    break;
case 50:
    printf("Number is equal to 50");
    break;
case 100:
    printf("Number is equal to 100");
    break;
default:
    printf("Number isn't 10, 50, or 100");
}*/

//int i = 1, j=1;

//printf("Enter a number:");
//scanf("%d", &number);
/*
do{
    printf("%d\n", (number*i));
    i++;
    }
    while(i<=10);
*/
/*
while(i<10){
    printf("%d\n", (number*i));
    i++;
};
*/
/*
for(i=1;i<10;i++){
    printf("%d\n", (number*i));
    if(i==5){
        break;
    }
};*/
/*
for(i=1;i<5;i++){
    for(j=1;j<5;j++){
        printf("%d %d\n", i,j);
        if(i==3 && j==3){
            break;
        };
    };
};
*/
/*
for(i=1;i<10;i++){
    for(j=1;j<10;j++){
        if(i==5 && j==5){
            continue;
        };
        printf("%d %d\n", i,j);
    }
};
*/

/*
int age;

printf("Enter your age:");
scanf("%d", &age);
if(age<18){
    printf("you're not eligible to vote\n");
}
else{
    printf("you're eligible to vote\n");
};
*/
float k= (float)9/4;
printf("%f",k);


//char str[50];
//printf("Enter your string:");
//gets(str);
//displayString(str);

return 0;
}

//void displayString(char str[]);  //by making it well, we must declare this function before int main() function
//void displayString(char str[]){
//printf("The passed string was: ");
//puts(str);
//}
