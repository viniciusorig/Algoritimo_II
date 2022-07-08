#include <stdio.h>

int main(int argc, char const * argv[]){
    printf("quantidade de argumento");
    printf("qtd de args %d\n", argc);
    printf("listando os paramentros");
    const char nome[] = *argv[1];
    for (int i = 0; i < argc; i++){
        printf("param %s\n", argv[i]);
    }
    return 0;
}