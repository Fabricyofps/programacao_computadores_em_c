/* Desenvolva um programa em C que calcule o salário semanal de um trabalhador. O programa deve solicitar ao usuário que informe a quantidade de horas trabalhadas 
na semana e a taxa de pagamento por hora. Em seguida, o programa deve calcular e exibir o salário semanal, considerando as informações fornecidas.
*/

#include <stdio.h>

int main() {
    float horas_trabalhadas, taxa_por_hora, salario_semanal;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite a taxa por hora: ");
    scanf("%f", &taxa_por_hora);

    salario_semanal = horas_trabalhadas * taxa_por_hora;

    printf("O salário semanal é: %.2f\n", salario_semanal);

    return 0;
}