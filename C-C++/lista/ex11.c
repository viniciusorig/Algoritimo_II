#include <stdio.h>
#include <stdlib.h>

#include "libex.h"

FILE *file;

int main()
{
    int c = 0, count = 0;
    char buf, ch;
    const char name[] = "arq.txt";
    document(&file, name);
    printf("type a caracter\n");
    scanf("%c", &ch);

    while(!feof(file))
    {
        fscanf(file, "%c", &buf);
        if(buf == ch){
            count++;
        }       
    }
    printf("%d\n\n", count);
}