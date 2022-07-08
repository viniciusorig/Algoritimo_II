#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

int main()
{
    FILE *archive;
    int i = 0;
    const char name [] = "arq.txt";
    char buffer[500];
    document(&archive, name);
    printf("Type to file: \n");
    scanf("%s", buffer);
    while (buffer[i] != '\0'){
        fprintf(archive, "%c", buffer[i]);
        i++;
    }
    printf("\nRecorded file\n");
    fclose(archive);
}