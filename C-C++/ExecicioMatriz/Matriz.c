#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocate(int lin, int colum, int **matrix){
   for(int i  =0; i < colum; i++){
       *(matrix+i) = (int*)malloc(sizeof(int));
    }
}

void complete(int lin, int colum, int **matrix){
    for(int i = 0 ; i < lin; i++){
        for(int j = 0; j < colum; j++){
            *(*(matrix+i)) = rand() %100;
        }
    }
}

void see(int lin, int colum, int **matrix){
    for(int i = 0 ; i < lin; i++){
        for(int j = 0; j < colum; j++){
            printf("%d\t", *(*(matrix+i)));
        }
        printf("\n");
    }
}

void delete(int lin, int colum, int **matrix){
    for(int j = 0; j < colum; j++){
        free(*(matrix+j));
    }
    free(matrix);
}

int main(){
    srand(time(NULL));
    int line = 0, column = 0;
    printf("Digite quantas linhas deseja na Matriz: ");
    scanf("%d", &line);
    printf("Digite quantas colunas seja na Matriz: ");
    scanf("%d", &column);
    int *matriz = (int*)malloc (line * sizeof(int));
    allocate(line, column, matriz);
    complete(line, column, matriz);
    see(line, column, matriz);
    delete(line, column, matriz);
}