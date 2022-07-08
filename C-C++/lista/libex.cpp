#include <stdio.h>
#include <stdlib.h>

#include "libex.hpp"

void verify(int *size)
{
    if ((1 >= *size))
    {
    }
    else
    {
        printf("Error: invalide size, type again");
        printf("type it number entire: ");
        scanf("%d", size);
        verify(size);
    }
}

void allocate(int *ptr, int size)
{
    if ((ptr = (int *)malloc(sizeof(int))) == NULL)
    {
        printf("Error: Allocation failed\nerror code: 0\n");
        exit(1);
    }
    printf("Allocation Successfull\ncode: 1\n");

    for (int i = 0; i < size; i++)
    {
        printf("what value will be allocated?\t");
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < size; i++)
    {
        printf("----------------------------------------------------\n");
        printf("value allocate is: %d\n", *(ptr + i));
        printf("the address of this allocation is: %p\n", (ptr + i));
    }

    printf("----------------------------------------------------\n");
    printf("clear the allocation\n");
    free(ptr);
}

void allocate(float *ptr){
    int size = 0;
    printf("type it number entire: ");
    scanf("%d", &size);
    if ((ptr = (float *)malloc(sizeof(float))) == NULL)
    {
        printf("Error: Allocation failed\nerror code: 0\n");
        exit(1);
    }
    printf("Allocation Successfull\ncode: 1\n");

    for (int i = 0; i < size; i++)
    {
        printf("what value will be allocated?\t");
        scanf("%f", (ptr + i));
    }
    for (int i = 0; i < size; i++)
    {
        printf("----------------------------------------------------\n");
        printf("value allocate is: %f\n", *(ptr + i));
        printf("the address of this allocation is: %p\n", (ptr + i));
    }

    printf("----------------------------------------------------\n");
    printf("clear the allocation\n");
    free(ptr);
}

void fill(int *ptr, int size)
{
    int i = 0;
    if ((ptr = (int *)malloc(sizeof(int))) == NULL)
    {
        printf("Error: Allocation failed\nerror code: 0\n");
        exit(1);
    }
    printf("Allocation Successfull\ncode: 1\n");

    while (i != size)
    {
        printf("what value will be allocated?\t");
        scanf("%d", ptr);
        printf("----------------------------------------------------\n");

        ptr++;
        i++;
    }
    ptr -= size;
    i = 0;
    while(i != size)
    {
        printf("----------------------------------------------------\n");
        printf("value allocate is: %d\n", *ptr);
        printf("the address of this allocation is: %p\n", ptr );
        ptr++;
        i++;
    }

    ptr -= size;

    printf("----------------------------------------------------\n");
    printf("clear the allocation\n");
    free(ptr);
}
