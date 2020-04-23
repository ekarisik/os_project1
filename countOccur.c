/* C program to count occurrences of a word in file */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

/* Function declarations */
int countOccurrences(FILE * file, const char* word);


int main(int argc, char** argv) {
    FILE * file;

    char word[50];

    int wCount;

    /* Input word to search in file */
    printf("Enter word to search in file: ");
    scanf("%s", word);

    /* Try to open file */
    file = fopen(argv[1], "r");

    /* Exit if file not opened successfully */
    if (file == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }

    // Call function to count all occurrence of word
    wCount = countOccurrences(file, word);

    printf("'%s' is found %d times in file.\n", word, wCount);


    // Close file
    fclose(file);

    return 0;
}


/* Returns total occurrences of a word in given file */
int countOccurrences(FILE * file, const char* word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;

    // Read line from file till end of file.
    while ((fgets(str, BUFFER_SIZE, file)) != NULL)
    {
        index = 0;

        // Find next occurrence of word in str
        while ((pos = strstr(str + index, word)) != NULL)
        {
            /* Index of word in str is memory address of pos - memory address of str. */
            index = (pos - str) + 1;

            count++;
        }
    }

    return count;
}
