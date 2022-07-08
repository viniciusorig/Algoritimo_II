#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Product{
    int registration;
    char *name[50];
    float value;
}product;

bool comparation(bool *w, char *mod){
    char correct_way [25] = "cadastro de produto";
    int b = strncmp(mod, correct_way, 8);
    if(b == 0){
        *w = true;
    }else{
        return 0;
    }
    return *w;
}

void read(product produce, FILE *file){
    int read = 0;
    if(!feof(file)){
        fread(&read, sizeof(int),1 , file);
        printf("%d\n", read);
    }
}

void write(product produce, FILE *file){
 
    printf("What is the product register?\n");
    scanf("%d", &produce.registration);
    fwrite(&produce.registration, sizeof(product), 1, file);
    printf("What is the product name?\n");
    scanf("%s", produce.name);
    fwrite(&produce.name, sizeof(product), 1, file);
    printf("What is the product value?\n");
    scanf("%f", &produce.value);
    fwrite(&produce.value, sizeof(product), 1, file);
    
}

int main(int argc, char *argv[]){
    int option = 0; 
    product produto; 

    if(argc < 3){
        fprintf(stderr,"Error: Lack of Arguments\n");
        fprintf(stderr,"The syntax should be: ./file name_ argument 2\n");
        return 0;
    }
 
    FILE *archive = fopen(argv[1], "rb+");
 
    if(archive == NULL){
        fprintf(stderr,"Error: Cannot open archive\n");
        fprintf(stderr,"Changing mode from rb+ to wb+\n");
        archive = fopen(argv[1], "wb+");
    }

    char *mode[50];
    *mode = argv[2]; 
    bool way = comparation(&way, *mode);
 
    if(way == true){
        printf("do you want to read or write?\n 1-ler | 2-escrever");
        scanf("%d", &option);
        option -= 1;
        if(option == 0){

        }else{
            write(produto, archive);       
        }
    }else{
        printf("Try again, typing the mode correct.\n");
        return 0;
    }
 
    fclose(archive);
}