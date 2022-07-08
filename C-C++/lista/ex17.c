#include <stdio.h>
#include <stdlib.h>

#include "libex.h"

FILE *file;

int main(int argc, const char *argv[])
{

    document(&file, argv[1]);
    search(&file, *argv[2]);
    fclose(file);
}