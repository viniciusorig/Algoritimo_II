#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

FILE *file;
FILE *swap;

int main(int argc, char const * argv[])
{
    document(&file, argv[1]);
    document(&swap, argv[2]);
    printf("Uppercase\n");
    uppercase(&file,&swap);
    fclose(file);
    fclose(swap);
}