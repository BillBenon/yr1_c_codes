#include <stdio.h>

int main(){
	
	int r,c,p,i,j,k;
	printf("Enter the number of pages: ");
	scanf("%d", &p);
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	int arr[p][r][c];
	printf("Enter the elements in array\n");
	for(i=0; i<p;i++){
		for(j=0;j<r;j++){
			printf("Enter the elements at page[%d]row[%d]\n", i, j);
			for(k=0;k<c;k++){
				scanf("%d", &arr[i][j][k]);
			}
		}
	}
	printf("The elements in our array are: \n");
	for(i=0;i<p;i++){
		for(j=0;j<r;j++){
			for(k=0;k<c;k++){
				printf("%d\t", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	return 0;
}
