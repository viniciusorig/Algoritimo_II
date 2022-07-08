#include <stdio.h>
#include "geometria.h"

int main(int argc, char const * argv[]){
    Square quadrado;
    Rectangle rectangle;
    printf("Qual o largura do retangulo/quadrado? ");
    scanf("%f", &rectangle.width);
    printf("Qual a altura do retangulo/quadrado? ");
    scanf("%f", &rectangle.height);
    ifarea(quadrado, rectangle);
    return 0;
}