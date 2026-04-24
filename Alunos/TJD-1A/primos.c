/*Itera por uma quantidade de números e encontra todos os números primos entre eles.
*/
#include <stdio.h>

void main()
{
    int primos[100] = {2};
    int primosTamanho = 1;
    int quantidade;
    
    printf("Quantos números você deseja testar? (mínimo de 3)");
    scanf("%i", &quantidade);

    printf("Números primos até 100: ");
    printf("\n2");
    
    for (int n = 3; n <= quantidade; n++) {
        int isPrimo = 1; // Bool, assumimos que o número é primo e verificamos para provar o contrário
        
        // Dividir o número por cada primo anterior
        for (int i = 3; i < primosTamanho; i++) { 
            if (n % primos[i] == 0) {
                isPrimo = 0;
                break;
            }
        }

        if (isPrimo == 1) {
            primos[primosTamanho] = n;
            primosTamanho += 1;
            printf("\n%i", n);
        }
    }
}