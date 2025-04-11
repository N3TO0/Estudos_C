/*Algoritimo que recebe um numero inteiro positivo, e  retorne a soma de todos os pares de 1 até o numero recebido*/

#include <stdio.h>


int main(){

    int numero_imput ;
    int numero_verificacao= 0;
    int soma = 0;

    printf("\nDigite um numero inteiro possitivo: ");
    scanf("%d",&numero_imput);

    while (numero_verificacao <= numero_imput){

        if(numero_verificacao % 2 == 0){

            soma+=numero_verificacao;
        }

        numero_verificacao++;
    }
    
    printf("\nA soma dos numeros pares ate o seu numero e de: %d",soma);
   
}   