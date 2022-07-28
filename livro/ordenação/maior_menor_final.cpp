#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor{3, 8, 15, 18, 1};
    cout << "passou aqui: criou o vetor 1 com a seguinte numeração {3, 8, 15, 18, 1}\n";
    vector<int> vetor2{};
    cout << "passou aqui: criou o vetor 2 vazio e tam 0\n";
    vetor2.resize(vetor.size());
    cout << "passou aqui: identificou o tamanho do vetor1 e redimencionou o tamnho do vetor 2\n";
    vector<int>::iterator it, it2;
    it = vetor.begin();
    it2 = vetor2.begin();
    cout << "passou aqui: criou 2 interadores apontando para o inicio de cada um dos vetores\n";
    int menor = *it, indice = 0;
    cout << "passou aqui: criada algumas variaveis\n";
    for (int i = 0; i < vetor2.size(); i++)
    {   
        cout << "entrou no primeiro for, posição " << i << endl;
        for (int j = 0; j < vetor.size(); j++)
        {
            cout << "entrou no segundo for, posição " << j << endl;
            if (*(it+i) < menor)
            {
                cout << "caiu no if" << endl;
                
                menor = *(it+i);
                indice = j;
                cout << "valor menor " << menor << endl;
            }
        }
        *(it2+i) = *(it+indice);
        it -= vetor.size();
        vetor.erase(it+indice);
        cout << "valor da posição " << i << " " << *(it+i) << endl;
    }
}
