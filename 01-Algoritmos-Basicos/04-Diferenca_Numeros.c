//Lê dois números e calcula a diferença (subtração).
#include <stdio.h>

int main() {
    int a, b, diferenca;

    printf("Digite o primeiro número: ");
    scanf("%i", &a);

    printf("Digite o segundo número: ");
    scanf("%i", &b);

    diferenca = a - b;

    printf("A diferença de %i - %i é %i.\n", a, b, diferenca);

    return 0;
}