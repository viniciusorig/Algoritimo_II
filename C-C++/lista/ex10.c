#include <stdio.h>
#include <stdlib.h>

#include "libex.h"

FILE *file;

int main()
{
    int c = 0, count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0, count_c = 0;
    char buf;
    const char name[] = "arq.txt";
    document(&file, name);
    c = getc(file);
    while (!feof(file))
    {
        fscanf(file, "%c", &buf);
        if (buf == 'a' || buf == 'e' || buf == 'i' || buf == 'o' || buf == 'u')
        {
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
        else
        {
            count_c++;
        }

}
        printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\nconsoantes = %d\n\n", count_a, count_e, count_i, count_o, count_u, count_c);
        fclose(file);
    }