#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	FILE *instream;
	char fname[81];
	char buffer[101];   /* current line */
	char *token;        /* pointer to current token */
	char *tokens[100];  /* array of unique tokens in file */
	int tokenline[100]; /* line number where token found */
	int ntokens = 0;    /* number of tokens found so far */
	int linenum = 0;    /* current line number */
	int tnum;
	
	printf("File: ");
	scanf("%80s",fname);
	
	if ((instream = fopen(fname,"r")) == NULL) {
		printf("Unable to open file %s\n",fname);
    	exit(-1);
	}
	while (fgets(buffer,sizeof(buffer)-1,instream) != NULL) {
		printf("%s>>>>>>>>>>buffer Before Tokenizer\n", buffer);
		linenum++;
		/* Get first token from string buffer */
		token = strtok(buffer," \t\n");
		printf("%s>>>>>>>>> token\n", token);
		while (token != NULL) {
			printf("%s>>>>>>>>>> token in the second while\n", token);
			tnum = 0;
			/* Search for current token in tokens */
			while ((tnum < ntokens) && (strcmp(token,tokens[tnum])))
				printf("%s >>>>>>>>>>>>>>>>>>>> token\n", token);
				tnum++;
			/* If the token isn’t found, add it to the tokens */
			if (tnum == ntokens) {
				tokens[tnum] = (char *) calloc(strlen(token) + 1,sizeof(char));
				strcpy(tokens[tnum],token);
				tokenline[tnum] = linenum;
				printf("%s >>>>>>>>>>>>>>>>>>Token in if condition\n", token);
				ntokens++;
			}
			/* Get next token from string buffer */
			token = strtok(NULL," \t\n");
    	}
  	}
  	/* print out the set of tokens appearing in the file */
	for (tnum = 0; tnum < ntokens; tnum++)
		printf("%s first appears on line %d\n",tokens[tnum],tokenline[tnum]);
	fclose(instream);
}
