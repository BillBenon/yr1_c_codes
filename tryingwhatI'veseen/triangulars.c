#include <stdio.h>

int main(){
	
//	THIS IS FOR RIGHT ANGLED TRIANGLE
	int trLines = 0, i = 0, j =0, l=0;
//	printf("Enter the number of lines of triangle=> ");
//	scanf("%d", &trLines);
//	for(i = 0; i < trLines; i++){
//		for(j = 0; j <= i; j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
	
	
//	THIS IS TO PRINT FULL ISSOSCELES TRIANGLE
	printf("Enter the number of triangle lines => ");
	scanf("%d", &trLines);
	for(i = 0; i <= trLines; i++){
		for(l = i; l < trLines; l++){
			printf("  ");
		}
		for(j = 0; j < i; j++){
			printf(" *  ");
		}
		printf("\n");
	}
	
	
//	THIS IS TO PRINT INVERSED TRIANGLE
//	printf("Enter the number of triangle lines => ");
//	scanf("%d", &trLines);
//	for(i = trLines; i >0; i--){
//		for(l = trLines; l > i; l--){
//			printf("  ");
//		}
//		for(j = i; j > 0; j--){
//			printf(" *  ");
//		}
//		printf("\n");
//	}
	
	
//	THIS IS TO PRINT REAL WELL ORGANISED PRYRAMID OF STARS
//	printf("Enter the number of triangle lines => ");
//	scanf("%d",&trLines);
//	for(i = 1; i <= trLines; i++){
//		for(j = 1; j <= 2*trLines - 1; j++){
//			if(j >= trLines-(i-1) && j <= trLines+(i-1)){
//				printf("*");
//			} else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
	
	return 0;
}
