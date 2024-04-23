#include <iostream>

using namespace std;

bool buscaLinear(int numero, int list[], int tamanhoArray)
{
    int esquerda = 0;
    int direita = tamanhoArray-1;
    int meio = 0;

    for (int i = 0; esquerda <direita; i++)
    {
        meio = (direita + esquerda)/2;

        if (numero == list[meio])
        {
            cout << "O numero: " << numero << " esta na posicao: " << meio << endl;
            return meio;
        } else if (numero > list[meio])
        {
            esquerda = meio+1;
        } else
        {
            direita = meio-1;
        }
    }

    cout << "Nao achou";
    return false;
}

int main ()
{
    int list[] = {1,3,5,34,64,23,155,32,123};
    int tamanhoArray = sizeof(list)/sizeof(int);

    buscaLinear(5, list, tamanhoArray);

    return 0;
}
