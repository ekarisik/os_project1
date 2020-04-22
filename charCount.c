#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	FILE * file;

    	char ch;
    	int characters;

    	/* Open source files in 'r' mode */
    	file = fopen(argv[1], "r");


    	/* Check if file opened successfully */
    	if (file == NULL)
    	{
        	printf("\nUnable to open file or no file is passed.\n");
        	printf("Please check if file exists and you have read privilege.\n");

        	exit(EXIT_FAILURE);
    	}

    	/* Logic to count characters */
    	characters = 0;
    	while ((ch = fgetc(file)) != EOF)
    	{
        characters++;
	}

    	/* Print number of characters */
    	printf("\n");
    	printf("Total characters in given file = %d\n", characters-1);

    	/* Close files to release resources */
    	fclose(file);	
	
	return 0;
}
