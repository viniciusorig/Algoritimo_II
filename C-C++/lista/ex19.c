#include <stdio.h>

#include "libex.h"

FILE *file;
int main(int argc, const char *argv[])
{
    int qtd = 0;
    printf("quantos telefones deseja gravar?\t");
    scanf("%d", &qtd);
    document(&file, argv[1]);
    for (int i = 0; i < qtd; i++)
    {
        write(&file);
    }
    fclose(file);
}