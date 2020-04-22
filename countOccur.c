#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAXCHAR 100000
 
int main(int argc, char** argv) {
    char unit[20], string[100000];
    int i = 0, j = 0, count = 0;

    /* FILE * file; */

    /* Open source files in 'r' mode */
    file = fopen(argv[1], "r");


    /* Check if file opened successfully */
    /* if (file == NULL)
    {
        printf("\nUnable to open file or no file is passed.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    } */
 	
    /* i = 0;
    do
    {
        fflush(argv[2]);
        c = getchar();
        string[i++] = c;
 
    } while (c != '\n');
    string[i - 1] = '\0'; */
    /* printf("Enter the word you want to find: "); */
    fgets(string, MAXCHAR, argv[1]);
    /* string = argv[1]; */
    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i]))
        {
            unit[j++] = string[i++];
        }
        if (j != 0)
        {
            unit[j] = '\0';
            if (strcmp(unit, argv[2]) == 0)
            {
                count++;
            }
            j = 0;
        }
    }
 
    printf("The number of times the word '%s' found in '%s' is '%d'.\n", argv[2], string, count);

    return 0;
}
