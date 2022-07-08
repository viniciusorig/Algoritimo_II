#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

FILE *file;
FILE *file2;
FILE *file3;

int main(int argc, char const * argv[])
{
    document(&file, argv[1]);
    document(&file2, argv[2]);
    document(&file3, argv[3]);
    printf("Copy");
    copy_file(&file, &file3);
    copy_file(&file2, &file3);
    fclose(file);
    fclose(file2);
    fclose(file3);
}