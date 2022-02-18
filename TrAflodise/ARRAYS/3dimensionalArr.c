#include <stdio.h>

int main(){
	
	int arr[][3][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
	int i,j,k;
	for(k=0;k<2;k++){
		for(j=0;j<3;j++){
			for(i=0;i<4;i++){
				printf("%d\t", arr[k][j][i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
