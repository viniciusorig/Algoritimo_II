#include <iostream>
#include <vector>
using namespace std;

void ordena(vector<int> vector1, vector<int> vector2, int tam)
{
    vector<int>::iterator *it, *it2;
    *it = vector1.begin();
    *it2 = vector2.begin();
    cout << "passou aqui: criou 2 interadores apontando para o inicio de cada um dos vetores\n";

    int indice = 0, menor = *it[0], new_tam = tam, tam_fim = tam;
    cout << "criada algumas variaveis" << endl;
    for (int i = 0; i < new_tam; i++)
    {
        cout << "entrou no primeiro for, posição " << i << endl;
        for (int j = 0; j < tam_fim; j++)
        {
            cout << "entrou no segundo for, posição " << j << endl;
            if (*it[j] < menor)
            {
                cout << "entrou no if posição " << j << endl;
                menor = *it[j];
                indice = j;
            }
            cout << "saiu do for de rodar o vetor 1 posição " << j << endl;
        }
        it -= tam;
        cout << "o interador do vetor 1 volta ao incio" << endl;
        it += indice;
        cout << "o interador do vetor 1 volta ao indice de menor valor" << endl;
        *it2[i] = *it[indice];
        cout << "trancreve o valor para o vetor 2" << endl;
        vector1.erase(*it);
        cout << "deleta a posição de it" << endl;
        it -= indice - 1;
        tam_fim--;
    }
    cout << "fim da função" << endl;
}
int main()
{
    vector<int> vetor{3, 8, 15, 18, 1};
    cout << "passou aqui: criou o vetor 1 com a seguinte numeração {3, 8, 15, 18, 1}\n";
    vector<int> vetor2{};
    cout << "passou aqui: criou o vetor 2 vazio e tam 0\n";
    vetor2.resize(vetor.size());
    cout << "passou aqui: identificou o tamanho do vetor1 e redimencionou o tamnho do vetor 2\n";
    cout << "chamou a dunção ordena\n";
    ordena(vetor, vetor2, vetor.size());
}