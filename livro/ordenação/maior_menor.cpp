#include <iostream>
#include <vector>
using namespace std;

void ordena(vector<int>::iterator **it, vector<int>::iterator **it2, int tam)
{
    int indice = 0, menor = **it[0], new_tam = tam, tam_fim = tam;
    //while (new_tam != 0)
    //{
        //for (int j = 0; j < tam; j++)
        //{
            for (int i = 0; i < tam_fim; i++)
            {
                if (**it[i] < menor)
                {
                    indice = i;
                }
            }
        //}
    //}

    printf("indice de menor valor %d\nValor= %d\n", indice, **it[indice]);
}

int main()
{
    vector<int> vetor{3, 8, 15, 18, 1};
    vector<int> vetor2{};
    int tam = vetor.size();
    vetor2.resize(tam);
    vector<int>::iterator *it, *it2;
    *it = vetor.begin();
    *it2 = vetor2.begin();
    ordena(&it, &it2, tam);
}