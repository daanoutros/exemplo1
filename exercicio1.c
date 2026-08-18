/*
========================================
Exercício 1 
========================================
*/

#include <stdio.h>

int main() {
    float salario;
    float salario_minimo = 1620.0;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Seu salario e: R$ %.2f\n", salario);
    printf("Voce recebe %.2f salarios minimos.\n", salario / salario_minimo);

    return 0;
}