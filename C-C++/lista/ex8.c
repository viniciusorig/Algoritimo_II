#include <stdio.h>
#include <stdlib.h>

#include "libex.h"

FILE *file;

int main()
{
    int c = 0, count = 0;
    char buf;
    const char name[] = "arq.txt";
    document(&file, name);
    c = getc(file);
    while(!feof(file))
    {
        fscanf(file, "%c", &buf);
        if(buf == '\n'){
            count++;
        }       
    }
    printf("%d\n\n", count);
}