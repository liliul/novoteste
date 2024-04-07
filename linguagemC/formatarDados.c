#include <stdio.h>

// %d ou i numeros inteiros na base decimal
// %X numeros inteiros na base hexadecimal
// %f numeros ponto flutuante em casas decimais
// %.2f para ter dois numeros casas decimais ex: 12.99 ou mais casas decimais
// %e numeros em anotações cientifica com casas decimais
// %c caracteres alfanumericos texto
// %s sequencia de caracteres alfanumericos texto
// .<num> espefica quantos digitos serao impressos apos a virgula

// \a toca um bipe, alarme sonoro padrão do sistema
// \b backspace
// \n quebra linha
// \t tabulação horizontal(tab)
// \r retorna no inicio da linha
// \o caractere nulo
// \v tabulação vertical(tab)


int main() {
    printf("Formatando printf\n\n\a");

    printf("valor inteiro %d \n", 5);
    printf("valor real %f \n", 5.1232421);
    printf("valor real com duas casas decimais %.2f \n", 3.53242);
    printf("texto com um caractere %c \n", 'a');
    printf("texto com um caractere %s \n", "Naruto Shippuden");
}
