#include <stdio.h>

int main(){
    int x = 0;
    printf("Entre com o numero de linhas ");
    scanf("%d",&x);
    for(int i=0; i<= x; i++){
        for(int j=0; j<= x; j++){
            if(i == 1|| i == x|| j == 1 ||j == x - i + 1 || i == j || j == x){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}