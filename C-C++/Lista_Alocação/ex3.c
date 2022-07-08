#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void complete(int *x1, int *x2, int *n1, int *n2){
    printf("O vetor 1 tera a seguinte sequencia:\n");
    
    for(int i = 0; i < *n1; i++){
        *(x1+i) = rand() %100;
        printf("%d\t", *(x1+i));
    }
    
    printf("\n");
    printf("O vetor 2 tera a seguinte sequencia:\n");

    for(int i = 0; i < *n2; i++){
        *(x2+i) = rand() %100;
        printf("%d\t", *(x2+i));
    }
    printf("\n");
}

int uniao(int *x1, int *x2, int *n1, int *n2, int *qtd){
    int i = 0, j = 0, n3 = 0;
    *qtd = *n1+*n2;
    int vector3[*qtd];
    
    for(i; i < *n1; i++){
        vector3[i] = *(x1+i);
    }
    for(int z = 0, j = *n2; j < *qtd; z++, j++){
        vector3[j] = *(x2+z);
    }


    printf("A união sera feita da segunte forma, o vetor 2 se juntara após o vetor 1.\n");
    printf("O total de casas foram de: %d\n", *qtd);
    printf("O vetor final apos a união dos outros 2 vetores é:\n");
    for(int k = 0; k < *qtd; k++){
        printf("%d\t", vector3[k]);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));
    int tam1 = 5, tam2 = 5, tam3 = 0,vector1[tam1], vector2[tam2];
    complete(vector1, vector2, &tam1, &tam2);
    uniao(vector1, vector2, &tam1, &tam2, &tam3);
}