#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libex.h"

FILE *file, *file2;

int main(int argc, const char *argv[])
{   
    document(&file, argv[1]);
    document(&file2, argv[2]);
    int line = atoi(argv[3]), column = atoi(argv[4]);
    int *matrix = (int*)malloc(line * sizeof(int));
    allocate_matrix(line, column, &matrix, &file, &file2);
    elements(&matrix, column, line);
    delete(column, &matrix);
    fclose(file);
    fclose(file2);
}