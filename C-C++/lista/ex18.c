#include <stdio.h>

#include "libex.h"

FILE *file;

int main(int argc, const char *argv[])
{
    document(&file, argv[1]);
    print1(&file);
    word(&file);
    fclose(file);
}