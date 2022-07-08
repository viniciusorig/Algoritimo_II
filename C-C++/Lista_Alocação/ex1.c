#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void complete(int *vector, int *tamanho){
    for(int i  = 0; i < *tamanho; i++){
        *(vector+i) = rand() %100;
    }
    for(int i = 0; i < *tamanho; i++){
        printf("%d\t", *(vector+i));
    }
    printf("\n");
}

void search(int *vector, int *tamanho){
    int div = 0;
        for(int i = 0; i < *tamanho; i++){
            div = *(vector+i);
            if((div % 2) == 0){
                printf("Na posição do vetor %d foi encontrado esse numero par: %d\n", i, div);
                printf("com o endereço de memoria %x \n", (vector[i]));
                printf("-------------------------------------------------\n\n");
            }
        }       
    printf("\nnão foram mais encontrados numeros pares!!.\n");
}

int main(){
    srand(time(0));
    int tam = 0;
    printf("Qual o tamor do vetor?\n");
    scanf("%d", &tam);
    int *vetor = (int*) malloc(tam * sizeof(int));
    complete(vetor, &tam);
    search(vetor, &tam);
    free(vetor);
}