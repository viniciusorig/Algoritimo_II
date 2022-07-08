#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char verify(const char *mode);
void open(FILE **file, const char *mode, const char name[]);

int main(int argc, const char *argv[])
{
    FILE *file;
    const char name[] = "teste.txt";
    const char mode = verify(argv[1]);
    open(&file, &mode, name);
}

char verify(const char *mode)
{
    switch (*mode)
    {
    case 'r':
    {
        printf("voce selecionou r\n");
        return 'r';
        break;
    }
    case 'w':
    {
        printf("voce selecionou w\n");
        return 'w';
    }
    default:
    {
        printf("voce errou seu imbecil\ntenta de novo trouxa\n");
        exit(1);
    }
    }
}

void open(FILE **file, const char *mode, const char name[])
{
    if ((*file = fopen(name, mode)) == NULL)
    {
        printf("erro naa abertura\n");
    }
    else
    {
        printf("deu tudo certo\n");
    }
}