#include <iostream>

using namespace std;

void menu() {
    cout << "Escolha uma operação:" << endl;
    cout << "1. Adição" << endl;
    cout << "2. Subtração" << endl;
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cout << "5. Sair" << endl;
}

int main() {
    int escolha;
    double num1, num2;
    bool continuar = true;

    while (continuar) {
        menu();
        cout << "Digite a sua escolha (1-5): ";
        cin >> escolha;

        if (escolha == 5) {
            continuar = false;
            cout << "Saindo da calculadora..." << endl;
            continue;
        }

        if (escolha < 1 || escolha > 5) {
            cout << "Escolha inválida. Tente novamente." << endl;
            continue;
        }

        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        switch (escolha) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Erro: Divisão por zero!" << endl;
                }
                break;
        }
    }

    return 0;
}
