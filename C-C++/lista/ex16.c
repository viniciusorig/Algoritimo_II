#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

FILE *file;
FILE *file2;

int main(int argc, char const * argv[])
{       
    document(&file, argv[1]);
    document(&file2, argv[2]);
    printf("abrio o 2\n");
    sort(&file, &file2);
    fclose(file);
    fclose(file2);
}