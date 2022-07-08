#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

FILE *file;
FILE *swap;

int main()
{
    const char name[] = "arq.txt", replace[] = "swap.txt";
    int c = 0;
    document(&file, name);
    document(&swap, replace);
    shift(&file, &swap);
    fclose(file);
    fclose(swap);
}
