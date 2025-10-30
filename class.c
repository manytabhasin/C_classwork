//wap to open a file if exists and check whether it is empty or having a text.
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist.\n");
        return 0;
    }
    ch = fgetc(fp);
    if (ch == EOF)
    {
        printf("File is empty.\n");
    }
    else
    {
        printf("File has text.\n");
    }
    fclose(fp);
    return 0;
}
