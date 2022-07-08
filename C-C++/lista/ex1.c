#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

int main()
{
    int pointer, sizemax = 0;
    printf("type it number entire: ");
    scanf("%d", &sizemax);
    verify(&sizemax);
    allocate(&pointer, sizemax);
}