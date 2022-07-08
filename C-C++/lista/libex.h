#ifndef _LIBEX_H
#define _LIBEX_H

typedef struct
{
    char CPF[12];
    char name[41];
    char birth[9];
} Person;

void verify(int *size);
int allocate(int *ptr, int size);
double fill(double *ptr, int size);
void document(FILE **name_of_file, const char name[]);
void verify_CPF(Person person);
void verify_birth(Person person);
void print(Person person);
void shift(FILE **file, FILE **swap);
void uppercase(FILE **name_of_file, FILE **swap);
void copy_file(FILE **f1, FILE **f2);
void sort(FILE **file1, FILE **file2);
void search(FILE **file, const char search);
void espace(FILE **file);
void word(FILE **file);
void print1(FILE **file);
void write(FILE **file);
void binary(FILE **file, int vector[]);     
void allocate_matrix(int lin, int colum, int **matrix, FILE **file, FILE **file1);
void delete (int colum, int **matrix);
void elements(int **matrix, int column1, int line1);

#endif