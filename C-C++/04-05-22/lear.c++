#include <iostream>
#include <stdio.h>

using namespace std;

FILE *nota = fopen("Notas.txt", "w+");

int main(){
    float p1 = 0, p2 = 0, t1 = 0, t2 = 0, media1 = 0, media2 = 0, mediaf = 0;
    for(int i = 0; i < 1; i++){;
        printf("Digite a nota da prova 1 do %d aluno",i);
        scanf("%f", &p1);
        fprintf(nota, "%.2f\t", p1);
        printf("Digite a nota prova 2 do %d aluno",i);
        scanf("%f", &p1);
        fprintf(nota, "%.2f\t", p1);

        printf("Digite a nota do trabalho 1 do  %d aluno",i);
        scanf("%f", &t1);
        fprintf(nota, "%.2f\t", t1);
        printf("Digite a nota trabalho 2 do %d aluno",i);
        scanf("%f", &t2);
        fprintf(nota, "%.2f\n", t2);
    }
    rewind(nota);
    while(fscanf(nota, "%f %f %f %f", &p1, &p2, &t1, &t2) != EOF){
        cout << "apos a leitura :\n";
        cout << "prova 1: "<< p1 << "\nprova 2: " << p2 << "\ntrabalho 1: " << t1;
        cout << "\ntrabalho 2: "<< t2 <<endl;
        cout << "media final: " << (((p1+p2)/2)*0.7)+(((t1+t2)/2)*0.3);
    }
    fcloseall();
}