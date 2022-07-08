#include <iostream>
#include <cstring>

using namespace std;

void search(string name[], int tamanho);

int main()
{
    string nomes[] = {"Adevaldo", "Artur", "Leila", "Vinicius", "Vitor"};
    int tam = (sizeof(nomes) / (sizeof(nomes[0])));
    search(nomes, tam);
}  

void search(string name[], int tamanho)
{
    int baixo = 0, alto = tamanho - 1, meio = 0, count = 0, i = 0, teste = 0;
    char *chute, *teste_char;
    string item;
    cout << "digite um nome para ser procurado\t";
    cin >> item;

    while (i < tamanho)
    {
        meio = (baixo + alto) / 2;
        chute = &name[meio][0];
        teste_char = &item[0];
        teste = strcasecmp(teste_char, chute);

        if (teste == 0)
        {
            cout << "localizado" << endl;
            break;
        }
        if (teste < 0)
        {
            cout << "ainda não foi encontrado o nome " << item << " estamos reajustando o chute para baixo" << endl;
            alto = meio - 1;
        }
        else
        {
            cout << "ainda não foi encontrado o nome " << item << " estamos reajustando o chute para cima" << endl;
            baixo = meio + 1;
        }
    }
}

