#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

int main()
{
    int size_int = 0, size_double = 0, ptr_int;
    double ptr_double;
    printf("how many houses in vector 'int':\t");
    scanf("%d", &size_int);
    verify(&size_int);
    allocate(&ptr_int, size_int);
    printf("\n\nhow many houses in vector 'double':\t");
    scanf("%d", &size_double);
    verify(&size_double);
    fill(&ptr_double, size_double);
}