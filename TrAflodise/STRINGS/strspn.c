#include <stdio.h>
#include <string.h>

int main() {
	
	printf("%d", strspn("a vowel","bvcwl"));
	printf("\n%d", strcspn("a vowel","@,*e") );
	
	return 0;
}
