#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct student
{
int id;
char name[50];
float fees;
struct Date
{
int dd;
int mm;
int yyyy;
}doj;
}s1,s2;
*/

/*
int max(int num1, int num2, int num3){
int result;
if(num1 >= num2 && num1 >= num3){
    result= num1;
} else if(num2 >= num1 && num2 >= num3){
result= num2;
} else {
result= num3;
}
return result;
}
*/

/*
int minval(int arr[], int size){
int i=0;
int min=arr[0];
for(i=0;i<size;i++){
    if(min>arr[i]){
        min= arr[i];
    }
}
return min;
}
*/

/*
void func(){
static int i=1;
int j=1;
i++;
j++;
printf("i=%d and j=%d\n",i,j);
};
*/

/*
int factorial(int n){
if(n<0){
    return -1;
} if(n==0)
    return 1;
    return (n* factorial(n-1));
}
*/

/*
void change(int *num){
printf("Before adding value to the function, num= %d\n", *num);
(*num)+=100;
printf("After adding value inside function, num=%d\n", *num);
}
*/


//int cube(int n){
//return n*n*n;
//}

int main(){
/*
int result1=0, result2= 0;
result1= cube(2);
result2= cube(3);

printf("%d\n", result1);
printf("%d\n", result2);
*/

/*
int x= 100;
printf("Before calling the function, x=%d\n", x);
change(&x);
printf("After function call x=%d\n", x);
*/
/*
int fact= 0;
fact= factorial(5);
printf("factorial of 5 is:%d", fact);
*/

/*
func();
func();
func();
*/
/*
int i=0;
int marks[5]={80, 89, 92, 65, 71};
for(i=0;i<5;i++){
    printf("%d\n",marks[i]);
}
*/

/*
int i=0,j=0;
int arr[4][3]= {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
for(i=0;i<4;i++){
    for(j=0;j<3;j++){
        printf("arr[%d][%d]=%d\n", i,j,arr[i][j]);
    }
};


/*
int i=0,min=0;
int numbers[]= {2,5,7,3,6,9};
min= minval(numbers, 6);
printf("The minimum number is: %d",min);
*/


//printf("The maximum number is: %d", max(4, 108, 14));


//POINTERS CHAPTER
/*
int num=50;
int *p;
int **p2;
p=&num;
p2=&p;

printf("Address of num variable is %x\n",&num);
printf("Address of p variable is %x\n",p);
printf("Value of *p variable is %d\n",*p);
printf("Address of p2 variable is %x\n",p2);
printf("Value of **p2 variable is %d",**p2);
printf("Address of p variable is %u\n",p);
p-=1;
printf("Address of p variable after increment is %u\n",p);
p+=3;
printf("Value of p after addition is %u\n",p);
*/

//DYNAMIC MEMORIES
/*
int n,i,*ptr,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc but if you want you can use calloc like this (n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }
    printf("Enter elements of array: ");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum=%d",sum);
    free(ptr);
*/

/*
s1.id=12;
strcpy(s1.name, "Dushime Ben");
s1.fees=83000;
s1.doj.dd=27;
s1.doj.mm=01;
s1.doj.yyyy=2017;

s2.id=112;
strcpy(s2.name, "Bahati Jill");
s2.fees=93000;
s2.doj.dd=01;
s2.doj.mm=02;
s2.doj.yyyy=2014;


printf("Student 1 id is: %d\n",s1.id);
printf("Student 1 name is: %s\n",s1.name);
printf("Student 1 fees is: %f\n",s1.fees);
printf("Student 1 date of joining (dd/mm/yyyy) is: %d/%d/%d\n",s1.doj.dd,s1.doj.mm,s1.doj.yyyy);
printf("Student 2 id is: %d\n",s2.id);
printf("Student 2 name is: %s\n",s2.name);
printf("Student 2 fees is: %f\n",s2.fees);
printf("Student 2 date of joining (dd/mm/yyyy) is: %d/%d/%d\n",s2.doj.dd,s2.doj.mm,s2.doj.yyyy);
*/

/*
char lname[]="bill benon";
printf("The string is: %s\n",lname);
printf("The length of name is: %d\n",strlen(lname));
char name[]="dushime ";
strcat(name,lname);
printf("Full name is: %s\n", name);
char fname[50]= "Museveni";
char pernon[]="Gilbert";
strcpy(fname, pernon);
printf("By string copying, name is: %s\n",fname);
*/
/*
char str1[20],str2[20];
printf("Enter the first string: ");
gets(str1);
printf("Enter the second string: ");
gets(str2);
if(strcmp(str1,str2)==0)
    printf("The strings are equal");
else
    printf("Strings aren't equal");
*/
/*
char line[255];
FILE * fpointer = fopen("students.txt", "r");

//fprintf(fpointer, "Bill, Nyagatare\nYves, Gisagara\nPeter, Rusizi\nSouvenir, Kayonza");  //when opened in "w" mode
//fprintf(fpointer, "\nDavid, Gatsibo");  //when opened in "a" mode instead of "r"

fgets(line, 255, fpointer);
printf("%s", line);

fclose(fpointer);
*/

int id;
char name[40];
float marks;
FILE * fptr = fopen("marks.txt", "w+");
if(fptr == NULL){
    printf("File does not exist\n");
    return;
}

printf("Enter the id\n");
scanf("%d",&id);
fprintf(fptr, "Id= %d\n",id);
printf("Enter the name\n");
scanf("%s", &name);
fprintf(fptr, "Name= %s\n", name);
printf("Enter the marks\n");
scanf("%f", &marks);
fprintf(fptr, "Marks= %.2f\n", marks);
fclose(fptr);


return 0;
}
