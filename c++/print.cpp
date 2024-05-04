#include <iostream>

using namespace std;

int main()
{
    int numero1 = 5;
    float numero2 = 3;

    cout << "Entrada & Saida de dados." << endl;

    cin >> numero1 >> numero2;

    if (numero2 >= numero1)
    {
        cout << "Sim o numero2 é maior que numero1" << endl;
    }

    if (numero1 <= numero2)
    {
        cout << "Sim o numero1 é menor que numero2" << endl;
    }

    cout << endl;
    cout << "O numero1: " << numero1 << " & numero2: " << numero2 << endl;
}