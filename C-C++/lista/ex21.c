#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libex.h"

FILE *file;

int main(int argc, const char *argv[])
{
    int vector[10], buf = 0;
    document(&file, argv[1]);
    for (int i = 0; i < 10; i++)
    {
        printf("Valor da casa %d do vetor\t", i);
        scanf("%d", &vector[i]);
    }
    binary(&file, vector);
    fclose(file);
}