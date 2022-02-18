#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  char fname[50],*tokenarr[20];
  char buffer[100];
  char *token;
  FILE *stream;
  int tnum=0;
  //get the filename
  printf("Enter the filename:\n");
  scanf("%49s",fname);
  //try to read the file
  if((stream =fopen(fname,"r")) ==NULL){
    printf("Unable to open the file %s",fname);
    exit(-1);
  }else{
   printf("File opened!\n");
  }
  //try to tokenize
  while(fgets(buffer,sizeof(buffer)-1,stream)){
    token =strtok(buffer,"\n");
    while(token !=NULL){
       // printf("token is %s\n",token);
//      tnum++;
        tokenarr[tnum] = (char *) calloc(strlen(token) + 1,sizeof(char));
      strcpy(tokenarr[tnum],token);
      // tokenarr[tnum++]=token;
        ++tnum;
      token =strtok(NULL,"\n");
    }
  }
//  printf("tnum equals to %d\n",tnum);
 srand(time(0));
//  for loop to print tokenarr
//for(int i=0;i<tnum;i++){
//  printf("%s\n",tokenarr[i]);
//}
int randn =rand()%tnum;
printf("random number %d",randn);
printf("%s please answer the question",tokenarr[randn]);
  fclose(stream);
}
