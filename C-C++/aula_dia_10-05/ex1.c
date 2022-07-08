#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file, *entrada;
    if((file = fopen("arquivo.txt", "w+")) == NULL)
    {
        printf("Error file not found");
        return 0;
    }
    char p[100] = "vini é topp";
    int i = 0; 
    i = strlen(p);
    while(i > 0)
    {
        fputs(p, file);
        fputs("\n", file);
        i--;
    }
    
    fclose(file);
    return 0;
}