/*
========================================
Exercício 2 
========================================
*/

#include <stdio.h>

int main() {
    int horas, minutos, total_minutos;

    printf("Digite as horas (0 a 23): ");
    scanf("%d", &horas);

    printf("Digite os minutos (0 a 59): ");
    scanf("%d", &minutos);

    total_minutos = (horas * 60) + minutos;

    printf("Se passaram %d minutos desde o inicio do dia.\n", total_minutos);

    return 0;
}