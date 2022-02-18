////THIS IS FOR PRINTING RECURSIONALY FIBONACCI NUMBERS
//
//#include <stdio.h>
//
//int term;
//int fibonacci(int frNum, int lsNum);
//
//int main(){
//	
//	static int frNum = 0, lsNum = 1;
//	printf("Enter the number of series to print out: ");
//	scanf("%d",&term);
//	printf("The fibonacci series are: ");
//	printf(" 0 1");
//	fibonacci(frNum, lsNum);
//	return 0;
//}
//
//int fibonacci(int frNum, int lsNum){
//	static int i = 1;
//	int nextFib;
//	
//	if(i == term){
//		return (0);
//	} else{
//		nextFib = frNum + lsNum;
//		frNum = lsNum;
//		lsNum = nextFib;
//		printf(" %d",nextFib);
//		i++;
//		fibonacci(frNum, lsNum);
//	}
//}


// THIS IS TO FIND THE LARGEST NUMBER IN AN ARRAY
#include <stdio.h>

int larNumFin(int[10]);
int l;

int main(){
	
	int arr[10], i;
	printf("Enter the number of elements => ");
	scanf("%d", &l);
	for(i = 0; i < l; i++){
		printf("element - %d : ", i);
		scanf("%d",&arr[i]);
	}
	int maxElem = larNumFin(arr);
	printf("The largest element in the array is %d", maxElem);
}
int larNumFin(int arr[]){
	static int i = 0, hstno = -9999999;
	if(i < l){
		if(hstno < arr[i])
			hstno = arr[i];
		i++;
		larNumFin(arr);
	}
	return hstno;
}
