#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	FILE * file;
    	char ch;
    	int characters, lines;

	/* Open source files in 'r' mode */
    	file = fopen(argv[1], "r");


    	/* Check if file opened successfully */
    	if (file == NULL)
    	{
        	printf("\nUnable to open file or no file was given.\n");
        	printf("Please check if file exists and you have read privilege.\n");

        	exit(EXIT_FAILURE);
    	}

    	/* Logic to count number of lines */
    	characters = lines = 0;
    	while ((ch = fgetc(file)) != EOF)
    	{
        	characters++;

        	/* Check new line */
        	if (ch == '\n' || ch == '\0') lines++;
    	}

    	/* Increment lines */
    	if (characters > 0) lines++;

    	/* Print number of lines */
    	printf("\n");
    	printf("Total number of lines in given file = %d\n", lines - 1);


    	/* Close files to release resources */
    	fclose(file);
	return 0;
}
