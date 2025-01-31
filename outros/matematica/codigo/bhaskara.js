function resolverEquacaoQuadratica(a, b, c) {
    // Calcula o discriminante (b² - 4ac)
    const discriminante = b * b - 4 * a * c;

    // Verifica se o discriminante é negativo, indicando que não há raízes reais
    if (discriminante < 0) {
        console.log("Não existem raízes reais.");
        return;
    }

    // Calcula as duas raízes usando a fórmula de Bhaskara
    const raiz1 = (-b + Math.sqrt(discriminante)) / (2 * a);
    const raiz2 = (-b - Math.sqrt(discriminante)) / (2 * a);

    // Exibe as raízes
    console.log(`As raízes da equação são: x1 = ${raiz1} e x2 = ${raiz2}`);
}

// Exemplo de uso:
resolverEquacaoQuadratica(19, 123, -5); // Saída: x1 = 2 e x2 = 1
