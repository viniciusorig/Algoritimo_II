#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int vetor[] = {8, 10, 3, 15};
    int tam = (sizeof(vetor) / sizeof(vetor[0]));
    int vetor2[tam], aux[tam - 1];
    int tamsize = tam, *ptr = &tamsize, menor = vetor[0], indice = 0;
    memset(vetor2, 0, tam * sizeof(vetor[0]));
    for (int i = 0; i < tam; i++)
    {
        cout << "entrou no primeiro for, posição " << i << endl;
        for (int j = 0; j < tam; j++,)
        {
            cout << "entrou no segundo for, posição " << j << endl;
            if (vetor[j] < menor)
            {
                cout << "caiu no if" << endl;

                menor = vetor[j];
                indice = j;
                cout << "valor menor " << menor << endl;
            }
            else
            {
                indice = j;
            }
        }
        vetor2[i] = menor;
        cout << "valor da posição " << i << " " << vetor[i] << endl;
    }
    for (int i = 0; i < tam; i++)
        cout << vetor2[i] << "\t";
}
