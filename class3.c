#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *file;
    int ch; 
    int last = 0;
    int cl = 0;

    file = fopen("sample.txt", "r");
    if (file == NULL) 
    {
        printf("Could not open file.\n");
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        if (ch == '\n')
        {
            cl++;
        }
        last = ch;
    }

     
    if (last != 0 && last != '\n')
    {
        cl++;
    }

    fclose(file);
    printf("Number of lines in the file: %d\n", cl);
    return EXIT_SUCCESS;
}