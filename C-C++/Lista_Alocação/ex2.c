#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int obtemPares(int *vetor, int *tamanho, int *tamNovo){
    printf("Os numeros pares encontrados foram:\n");
    for(int i = 0; i < *tamanho; i++){
        if((*(vetor+i) % 2) == 0){
            *(tamNovo + i) = *(vetor + i);
            printf("%d\t", *(tamNovo+i));
        }
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    int tam = 10, vector[tam];
    
    for(int i = 0; i < tam; i++){
        vector[i] = rand() %100;
        printf("%d\t", vector[i]);
    }
    printf("\n");
    
    int *vectorNew = (int*)malloc(tam * sizeof(int));
    
    obtemPares(vector, &tam, vectorNew);
}