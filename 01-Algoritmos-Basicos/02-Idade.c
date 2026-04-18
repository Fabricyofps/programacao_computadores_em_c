// Um algoritmo responsável por ler a idade do usuário e apresentar ela em tela.
#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade é %d anos.\n", idade);
    return 0;
}