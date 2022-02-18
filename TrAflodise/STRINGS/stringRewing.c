#include <stdio.h>

int main() {
	
	char str[] = "This is the content we learn string rewind";
	FILE *fp;
	int ch;
	
	/* First let's write some content in the file amahoro.txt */
	fp = fopen("amahoro.txt", "w");
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);
	
	fp = fopen("amahoro.txt", "r");
	while(1) {
		ch = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		printf("%c", ch);
	}
	rewind(fp);
	printf("\n");
	
	while(1) {
		ch = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		printf("%c", ch);
	}
	fclose(fp);
	
	return 0;
}
