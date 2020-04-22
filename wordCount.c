#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv) {
	FILE * file;

    	char ch;
    	int characters, words;

    	/* Open source files in 'r' mode */
    	file = fopen(argv[1], "r");


    	/* Check if file opened successfully */
    	if (file == NULL)
    	{
        	printf("\nUnable to open file or no file was passed.\n");
        	printf("Please check if file exists and you have read privilege.\n");

        	exit(EXIT_FAILURE);
    	}

    	/* Logic to count words */
    	words = characters = 0;
    	while ((ch = fgetc(file)) != EOF)
    	{
        	characters++;

        	/* Check words */
        	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') words++;
	}

    	/* Increment words */
    	if (characters > 0) words++;

    	/* Print file statistics */
    	printf("\n");
        printf("Total number of words in given file = %d\n", words);

    	/* Close files to release resources */
    	fclose(file);

	return 0;
}
