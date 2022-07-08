#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#include "libex.h"

void verify(int *size)
{
    if ((1 >= *size < 11))
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

int allocate(int *ptr, int size)
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

double fill(double *ptr, int size)
{
    int i = 0;
    if ((ptr = (double *)malloc(sizeof(double))) == NULL)
    {
        printf("Error: Allocation failed\nerror code: 0\n");
        exit(1);
    }
    printf("Allocation Successfull\ncode: 1\n");

    while (i != size)
    {
        printf("what value will be allocated?\t");
        scanf("%lf", ptr);
        printf("----------------------------------------------------\n");

        ptr++;
        i++;
    }
    ptr -= size;
    i = 0;
    while (i != size)
    {
        printf("----------------------------------------------------\n");
        printf("value allocate is: %lf\n", *ptr);
        printf("the address of this allocation is: %p\n", ptr);
        ptr++;
        i++;
    }

    ptr -= size;

    printf("----------------------------------------------------\n");
    printf("clear the allocation\n");
    free(ptr);
}

void document(FILE **name_of_file, const char name[])
{
    *name_of_file = fopen(name, "rb+");
    if (*name_of_file == NULL)
    {
        printf("Change of mode from r+ to w+\n");
        *name_of_file = fopen(name, "wb+");
    }
}

void verify_CPF(Person person)
{
    if (strlen(person.CPF) != 11)
    {
        printf("Inavalid CPF\n");
        printf("Type again\n");
        scanf("%s", person.CPF);
        verify_CPF(person);
    }
}

void verify_birth(Person person)
{
    if (strlen(person.birth) != 8)
    {
        printf("Inavalid date of birth\n");
        printf("Type again\n");
        scanf("%s", person.birth);
        verify_birth(person);
    }
}

void print(Person person)
{
    printf("Person\n");
    printf("CPF:\n");
    printf("%s\n", person.CPF);
    printf("birth:\n");
    printf("%s\n", person.birth);
    printf("name:\n");
    printf("%s\n", person.name);
}

void shift(FILE **file, FILE **swap)
{
    printf("entrou na func");
    char buf;
    int count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_e = 0, count_f = 0, count_g = 0,
        count_h = 0, count_i = 0, count_j = 0, count_k = 0, count_l = 0, count_m = 0, count_n = 0,
        count_o = 0, count_p = 0, count_q = 0, count_r = 0, count_s = 0, count_t = 0, count_u = 0,
        count_v = 0, count_w = 0, count_x = 0, count_y = 0, count_z = 0, c = 0;

    while (!feof(*file))
    {
        fscanf(*file, "%c", &buf);
        if (buf == 'a')
        {
            fprintf(*swap, "*");
            count_a++;
        }
        if (buf == 'b')
        {
            fprintf(*swap, "%c", buf);
            count_b++;
        }
        if (buf == 'c')
        {
            fprintf(*swap, "%c", buf);
            count_c++;
        }
        if (buf == 'd')
        {
            fprintf(*swap, "%c", buf);
            count_d++;
        }
        if (buf == 'e')
        {
            fprintf(*swap, "*");
            count_e++;
        }
        if (buf == 'f')
        {
            fprintf(*swap, "%c", buf);
            count_f++;
        }
        if (buf == 'g')
        {
            fprintf(*swap, "%c", buf);
            count_g++;
        }
        if (buf == 'h')
        {
            fprintf(*swap, "%c", buf);
            count_h++;
        }
        if (buf == 'i')
        {
            fprintf(*swap, "*");
            count_i++;
        }
        if (buf == 'j')
        {
            fprintf(*swap, "%c", buf);
            count_j++;
        }
        if (buf == 'k')
        {
            fprintf(*swap, "%c", buf);
            count_k++;
        }
        if (buf == 'l')
        {
            fprintf(*swap, "%c", buf);
            count_l++;
        }
        if (buf == 'm')
        {
            fprintf(*swap, "%c", buf);
            count_m++;
        }
        if (buf == 'n')
        {
            fprintf(*swap, "%c", buf);
            count_n++;
        }
        if (buf == 'o')
        {
            fprintf(*swap, "*");
            count_o++;
        }
        if (buf == 'p')
        {
            fprintf(*swap, "%c", buf);
            count_p++;
        }
        if (buf == 'q')
        {
            fprintf(*swap, "%c", buf);
            count_q++;
        }
        if (buf == 'r')
        {
            fprintf(*swap, "%c", buf);
            count_r++;
        }
        if (buf == 's')
        {
            fprintf(*swap, "%c", buf);
            count_s++;
        }
        if (buf == 't')
        {
            fprintf(*swap, "%c", buf);
            count_t++;
        }
        if (buf == 'u')
        {
            fprintf(*swap, "*");
            count_u++;
        }
        if (buf == 'v')
        {
            fprintf(*swap, "%c", buf);
            count_v++;
        }
        if (buf == 'w')
        {
            fprintf(*swap, "%c", buf);
            count_w++;
        }
        {
            if (buf == 'x')
                fprintf(*swap, "%c", buf);
            count_x++;
        }
        if (buf == 'y')
        {
            fprintf(*swap, "%c", buf);
            count_y++;
        }
        if (buf == 'z')
        {
            fprintf(*swap, "%c", buf);
            count_z++;
        }
        else
        {
            fprintf(*swap, "%c", buf);
        }
    }

    printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\nF:%d\nG:%d\nH:%d\nI:%d\nJ:%d\nK:%d\nL:%d\nM:%d\nN:%d\nO:%d\nP:%d\nQ:%d\nR:%d\nS:%d\nT:%d\nU:%d\nV:%d\nW:%d\nX:%d\nY:%d\nZ:%d\n",
           count_a, count_b, count_c, count_d, count_e, count_f, count_g, count_h, count_i, count_j, count_k, count_l, count_m, count_n, count_o, count_p, count_q, count_r, count_s,
           count_t, count_u, count_v, count_w, count_x, count_y, count_z);
}

void uppercase(FILE **name_of_file, FILE **swap)
{
    char buf;
    int c = getc(*name_of_file);
    fscanf(*name_of_file, "%c", &buf);
    fprintf(*swap, "%c", toupper(buf));
    while (!feof(*name_of_file))
    {
        fscanf(*name_of_file, "%c", &buf);
        fprintf(*swap, "%c", toupper(buf));
    }
}

void copy_file(FILE **f1, FILE **f2)
{
    char buf;
    int c = getc(*f1);
    rewind(*f1);
    fscanf(*f1, "%c", &buf);
    while (!feof(*f1))
    {
        fprintf(*f2, "%c", buf);
        fscanf(*f1, "%c", &buf);
    }
    fprintf(*f2, "\n");
}

void sort(FILE **file1, FILE **file2)
{
    char city[40];
    int big = 0, habitants = 0;
    while (fscanf(*file1, "%s\t%d\n", city, &habitants) != EOF)
    {
        if (habitants > big)
        {
            big = habitants;
        }
    }
    fprintf(*file2, "%s\n", city);
    fprintf(*file2, "%d\n", big);
}

void search(FILE **file, const char search)
{
    char buffer[10];
    int count = 0;
    while (!feof(*file))
    {
        fscanf(*file, "%s", buffer);
        if (*buffer == search)
        {
            count++;
        }
    }
    printf("the word repeated:: %d\n", count);
}

void print1(FILE **file)
{
    char buf;
    int count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_e = 0, count_f = 0, count_g = 0,
        count_h = 0, count_i = 0, count_j = 0, count_k = 0, count_l = 0, count_m = 0, count_n = 0,
        count_o = 0, count_p = 0, count_q = 0, count_r = 0, count_s = 0, count_t = 0, count_u = 0,
        count_v = 0, count_w = 0, count_x = 0, count_y = 0, count_z = 0, c = 0, count = 1;

    while (!feof(*file))
    {
        fscanf(*file, "%c", &buf);
        if (buf == 'a')
            count_a++;
        if (buf == 'b')
            count_b++;
        if (buf == 'c')
            count_c++;
        if (buf == 'd')
            count_d++;
        if (buf == 'e')
            count_e++;
        if (buf == 'f')
            count_f++;
        if (buf == 'g')
            count_g++;
        if (buf == 'h')
            count_h++;
        if (buf == 'i')
            count_i++;
        if (buf == 'j')
            count_j++;
        if (buf == 'k')
            count_k++;
        if (buf == 'l')
            count_l++;
        if (buf == 'm')
            count_m++;
        if (buf == 'n')
            count_n++;
        if (buf == 'o')
            count_o++;
        if (buf == 'p')
            count_p++;
        if (buf == 'q')
            count_q++;
        if (buf == 'r')
            count_r++;
        if (buf == 's')
            count_s++;
        if (buf == 't')
            count_t++;
        if (buf == 'u')
            count_u++;
        if (buf == 'v')
            count_v++;
        if (buf == 'w')
            count_w++;
        if (buf == 'x')
            count_x++;
        if (buf == 'y')
            count_y++;
        if (buf == 'z')
            count_z++;
        if (buf == '\n')
            count++;
    }
    printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d\nF:%d\nG:%d\nH:%d\nI:%d\nJ:%d\nK:%d\nL:%d\nM:%d\nN:%d\nO:%d\nP:%d\nQ:%d\nR:%d\nS:%d\nT:%d\nU:%d\nV:%d\nW:%d\nX:%d\nY:%d\nZ:%d\nLines:%d\n\n",
           count_a, count_b, count_c, count_d, count_e, count_f, count_g, count_h, count_i, count_j, count_k, count_l, count_m, count_n, count_o, count_p, count_q, count_r, count_s,
           count_t, count_u, count_v, count_w, count_x, count_y, count_z, count);
}

void word(FILE **file)
{
    rewind(*file);
    int i = 0, count = 0;
    char word[10];

    while (!feof(*file))
    {
        fscanf(*file, "%s", word);
        count++;
    }
    printf("%d words\n", count);
}

void write(FILE **file)
{
    char buffer[30];
    int i = 0;
    scanf("%s", buffer);
    for (bool h = false; h != true; i++)
    {
        if (buffer[i] != '0')
        {
            fprintf(*file, "%c", buffer[i]);
        }
        else
        {
            h = true;
        }
    }
    fprintf(*file, "\n");
}

void binary(FILE **file, int vector[])
{
    int buf = 0;
    for (int i = 0; i < 10; i++)
    {
        fwrite(&vector[i], sizeof(int), 10, *file);
        fprintf(*file, "\n");
    }
    printf("gravou no arquivo\n voce quer provas hahahahahahaha\n");
    printf("aqui vai olha a converção ai bicho heheheheh");
    rewind(*file);
    for (int i = 0; i < 10; i++)
    {
        fread(&buf, sizeof(int), 1, *file);
        printf("Valor da casa %d do vetor apos convertido é: %d\n", i, buf);
    }
}

void allocate_matrix(int lin, int colum, int **matrix, FILE **file, FILE **file1)
{

    for (int i = 0; i < colum; i++)
    {
        *(matrix + i) = (int *)malloc(sizeof(int));
    }
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            *(*(matrix + i)) = rand() % 100;
        }
    }
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < colum; j++)
        {

            fprintf(*file, "%d\t", *((*(matrix + i))+j));
        }
        fprintf(*file, "\n");
    }
}

void elements(int **matrix, int column1, int line1)
{
    int qtd = 0;
    printf("Quantas pocisoes que deseja zerar?\t");
    scanf("%d", &qtd);
    int line[qtd], column[qtd];
    for (int i = 0; i < qtd; i++)
    {
        printf("linha:\t");
        scanf("%d", &line[i]);
        printf("coluna:\t");
        scanf("%d", &column[i]);
    }
    for (int i = 0; i < line1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            if(i == line[i]){
                if(j == column[j]){
                    *(*(matrix+i)+j) = 0;
                }
            }
        }
    }
}

void delete (int colum, int **matrix)
{
    for (int j = 0; j < colum; j++)
    {
        free(*(matrix + j));
    }
    free(matrix);
}
