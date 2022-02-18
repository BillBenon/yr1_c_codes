#include <stdio.h>

void main() {
	
//	char lastName[11];
//	char firstName[11];
//	
//	printf("Enter your name (first , last): ");
//	scanf("%10s%*[^,],%10s", firstName , lastName);
//	printf("Nice to meet you %s %s\n", firstName, lastName);

//	char str1[6] = "Hello";
//	char str2[] = "Second Hello";
//	char *str3;
//	str3 = str1;
//	str3 = str2;
//	printf("This is %s", str3);

	char *str1 = "hello";
	char *str2 = "goodbye";
	char *str3;
	str3 = str1;
	str3 = str2;
	printf("%s", str3);

//	int i;
//    int a[5] = {5, 6, 7, 8, 9};
//    int *p = a;     // same as int*p = &a[0]
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d", *p);
////        printf("%d", a[i]);
////        printf("%d", a+i);
////		printf("%d", *(a+i));
//        printf("\n");
//        p++;
//    }
	
}
