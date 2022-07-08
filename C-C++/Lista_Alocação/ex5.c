#include <stdio.h>
#include <stdlib.h>

const int mH = 1;
const int mC = 12;

typedef struct Hidrocarboneto{
    int h, c, total;
}hidrocarboneto;

void caculate(int *H, int *C, int *Total, int *hid, int *carbon){
    *H = mH*(*hid);
    *C = mC*(*carbon);
    *Total = *H + *C;
}

int main(){
    int qtdH = 0, qtdC = 0;
    hidrocarboneto *hidro = (hidrocarboneto*)malloc(sizeof(hidrocarboneto));
    
    printf("Quantidade de Hidrogenio? ");
    scanf("%d", &qtdH);
    printf("Quantidade de Carbono?");
    scanf("%d", &qtdC);
    caculate(&hidro->h, &hidro->c, &hidro->total, &qtdH, &qtdC);

    printf("%d\n", hidro->total);
}