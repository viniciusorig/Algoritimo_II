#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *tamanho){
    int *vector = (int*) malloc((*tamanho)*sizeof(int));

    for(int i  = 0; i < *tamanho; i++){
        *(vector+i) = rand() %100;
    }
    for(int i = 0; i < *tamanho; i++){
        printf("%d\t", *(vector+i));
    }
    printf("\n");
}

int main(){
    srand(time(0));
    int tam = 0;
    printf("Qual o tamor do vetor?\n");
    scanf("%d", &tam);
    create(&tam);
}