#include <stdio.h>

int main() {
	
//	declaring arrays
	char s[] = "20 students Y1C 18 Students Y1B 22 Students Y1A";
	char str[10], str2[10];
	int i;
//	sscanf() is used to read formatted input from the string
//	%*s is used to skip a word
//	sscanf(s, "%d %*s %*s %*s %s %s %*s %*s %*s", &i, str, str2);
	sscanf(s, "%*d %s %*s %d %*s %*s %*s %*s %*s %s", str, &i, str2);
	printf("%d %s %s ", i, str, str2);
	
	return 0;
}
