#include <stdio.h>
#include <stdlib.h>

#include "libex.h"

FILE *file;

int main()
{
    int c = 0, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
    char buf;
    const char name[] = "arq.txt";
    document(&file, name);
    c = getc(file);
    while (!feof(file))
    {
        fscanf(file, "%c", &buf);
        if (buf == 'a')
        {
            count_a++;
        }
        if (buf == 'e')
        {
            count_e++;
        }
        if (buf == 'i')
        {
            count_i++;
        }
        if (buf == 'o')
        {
            count_o++;
        }
        if (buf == 'u')
        {
            count_u++;
        }
    }

    printf("%d\n%d\n%d\n%d\n%d\n\n", count_a, count_e, count_i, count_o, count_u);
    fclose(file);
}