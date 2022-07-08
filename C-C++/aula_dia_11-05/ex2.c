#include <stdio.h>
#define TAM 3

int main(int argc, const char *argv[]){
    if(argc < 2){
        fprintf(stderr,"Quantidade infuciente.\n");
        return 1;
    }
    
    int novo = 0;

    FILE *file = fopen(argv[1], "r");

    if (file == NULL){
        fprintf(stderr,"Não foi posssivel abrir o arquivo.\n");
        file = fopen(argv[1], "w");
        novo = 1;
        fprintf(stdout,"Novo arquivo criada\n");
    }
    int vetor[TAM];
    fprintf(stdout,"digite %d de numeros inteiros: \n", TAM);

    for(int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
    
    fwrite(&vetor, sizeof(int), TAM, file);

    int val = 0;
    while(!feof(file)){
    fread(&val, sizeof(int),1 , file);
    fprintf(stdout, "valor lido = %d\n", val);
    }
    fclose(file);
}