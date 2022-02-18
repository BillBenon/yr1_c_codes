#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char fname[81];
	char prevLine[101] = "God is great";
	char buffer[101];
	FILE *instream;
	printf("Check which file: ");
	scanf("%80s", fname);
	
//	instream = fopen(fname, "r");
	if ((instream = fopen(fname, "r")) == NULL) {
		printf("Unable to open file %s\n", fname);
		exit(-1);
	}
	/* read a line of characters */
	while(fgets(buffer, sizeof(buffer)-1, instream) != NULL) {
		/* if current line same as previous */
		printf("%d", !strcmp(buffer, prevLine));
		if (!strcmp(buffer, prevLine)) {
			printf("Duplicate line: %s", buffer);
		}
		/* otherwise if the first 10 characters of the current and previous line are the same */
		else if (!strncmp(buffer, prevLine, 10)) {
			printf("Start the same:\n %s %s", prevLine, buffer);
			/* copy the current line (in buffer) to the previous line (in prevLine) */
			strcpy(prevLine, buffer);
			printf("\n%s", prevLine);
		}
		fclose(instream);
	}
	
	return 0;
}
