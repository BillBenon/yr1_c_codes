#include <stdio.h>
#include <string.h>
#include <time.h>

int randm(){
int ran, sran = 0;
if(sran = 0){
    srand(time(NULL));
    sran = 1;
}
ran = (rand()%(100-1+1)+1);
return ran;
}

int main(){

int ran, sran, counter, num;
ran=randm();
guess(ran);

return 0;
}

int guess(int ran){

ran=randm();
int counter, a=0, num;
while(a < 5){
    printf("Guess a number btn 1 and 100: ");
    scanf("%d", &num);

    if(a == 4 && num!=ran){
    printf("You loose the number was %d\n",ran);
    back();
    return;
    }

    if(a == 4 && num==ran){
     printf("Yeah! You've done it!\n");
    back();
    return;
    }

    if(a<5){
    if(num < ran){
        printf("The number you entered is less.\n");
    }
    else if(num > ran){
        printf("The number you entered is high.\n");
    }else if(num == ran){
        printf("Yeah! You've done it!\n");
        back();
        break;
    }
}
a++;
}

}

    back(){
    char leave[10],continu[10],value[10];
    int ran=randm();
    strcpy(leave,"t");
    strcpy(continu,"f");

    printf("Press t to leave or f to continue: ");
    scanf("%s",value);

    if(strcmp(leave,value)==0){
     printf("\nGame Over !!!\n");
    }

    if(strcmp(continu,value)==0){
     guess(ran);
    }

}
