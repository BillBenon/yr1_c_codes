#include <stdio.h>

int main(){
//	int arr[5];
//	arr[0] = 5;
//	arr[2] = -10;
//	arr[3/2] = 2;
//	arr[3] = arr[0];
//	printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	int numbers[100] = {1,2,3,[10] = 10, 11,12, [47] = 50, [42] = 420, 43, 54,43,41,65};
	int i;
	/* output each array element's value */
	for(i=0; i<100;i++) {
		printf("Element[%d] = %d\n", i, numbers[i]);
	}
	printf("\n %d",numbers[100]);

//	int a[2][3][4] = {{{11,12,13,14},{21,22,23,24},{31,32,33,34}}, {{5,6,7,8},{9,10,15,16},{35,36,37,38}}};
//	int k,i,j;
//	
//	for(k=0; k<2; k++) {
//		for(i=0; i<3;i++) {
//			for(j=0; j<4; j++){
//				printf("%d\t", a[k][i][j]);
//			}
//		}
//		printf("\n");
//	}
	
	return 0;
}
