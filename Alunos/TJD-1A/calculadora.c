#include <stdio.h>
#include <math.h>

void main()
{
    int operacao;
    float num1, num2, resultado;
    
    printf("Digite a operação: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\n5 - Potência\n");
    scanf("%i", &operacao);
    
    printf("\nDigite o primeiro valor: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &num2);
    
    if (operacao == 1) { // Soma
        printf("Calculando %.2f + %.2f", num1, num2);
        resultado = num1 + num2;
        printf("\nResultado = %.2f", resultado);
    }
    else if (operacao == 2) { // Subtração
        printf("Calculando %.2f - %.2f", num1, num2);
        resultado = num1 - num2;
        printf("\nResultado = %.2f", resultado);
    }
    else if (operacao == 3) { // Multiplicação
        printf("Calculando %.2f * %.2f", num1, num2);
        resultado = num1 * num2;
        printf("\nResultado = %.2f", resultado);
    }
    else if (operacao == 4) { // Divisão
        printf("Calculando %.2f / %.2f", num1, num2);
        resultado = num1 / num2;
        printf("\nResultado = %.2f", resultado);
    }
    else if (operacao == 5) { // Potência
        printf("Calculando %.2f ^ %.2f", num1, num2);
        resultado = pow(num1, num2);
        printf("\nResultado = %.2f", resultado);
    }
    else {
        printf("Operação invalida.");
    }
}