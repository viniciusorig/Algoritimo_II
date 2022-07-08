#include <iostream>

using namespace std;

void search(int vetor[], int tamanho);

int main()
{
    int vector[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = (sizeof(vector) / sizeof(vector[0]));
    search(vector, tam);
}

void search(int vetor[], int tamanho)
{
    
    int baixo = 0, alto = tamanho - 1, meio = 0, chute = 0, item = 0, count = 0;
    
    cout << "digite o numero para procurar:\t";
    cin >> item;

    while (baixo <= alto)
    {
        meio = (baixo + alto) / 2;
        chute = vetor[meio];
        if (chute == item)
        {
            cout << "foi encontrado o numero " << chute << " foi ajustado " <<count << " vezes"<< endl;
            break;
        }
        if (chute > item)
        {
            cout << "ainda não foi encontrado o numero " << item << " estamos reajustando o chute para baixo" << endl;
            alto = meio - 1;
            count++;
            cout <<"tentativa para encontrar "<< count << endl;
        }
        if (chute < item)
        {
            cout << "ainda não foi encontrado o numero " << item << " estamos reajustando o chute para cima" << endl;
            count++;
            cout <<"tentativa para encontrar "<< count << endl;
            baixo = meio + 1;
        }
    }
}
