/*Programa que recebe um valor e verifica se é primo ou não*/

#include <stdio.h>

int main() {
    int num, i, contador = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Não é primo.\n");
    } else {
        i = 2;
        while (i < num) {
            if (num % i == 0) {
                contador++;
            }
            i++;
        }

        if (contador == 0) {
            printf("É primo.\n");
        } else {
            printf("Não é primo.\n");
        }
    }

    return 0;
}