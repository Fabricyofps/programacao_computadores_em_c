// Lê dois números e mostra o produto.
#include <stdio.h>

int main() {
    int a, b, produto;

    printf("Digite o primeiro número: ");
    scanf("%i", &a);

    printf("Digite o segundo número: ");
    scanf("%i", &b);

    produto = a * b;

    printf("O produto de %i * %i é %i.\n", a, b, produto);

    return 0;
}