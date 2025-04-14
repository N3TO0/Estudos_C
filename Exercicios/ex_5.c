/*Programa que recebe 10 valores, e faz a soma do maior valor com o menor valor.*/

#include <stdio.h>


int main(){

    int valor, a=1;
    int maior, menor, soma=0;

    printf("\nDigite 10 valores para saber o meior numero e o menor e a soma entre eles: ");

    printf("\n\nValor %d: ",a);
    scanf("%d",&valor);
    maior = valor;                           
    menor = valor;
    
    while (a < 10)
    {
        a++;

        printf("\n\nValor %d: ",a);
        scanf("%d",&valor);
        if (valor > maior) maior = valor ;        
        if (valor < menor) menor = valor ;

    }
    
    soma= maior + menor;

    printf("\n\nValores:\n\nMaior: %d\n\nMenor: %d\n\nSoma entre eles: %d\n\n", maior, menor, soma);
   
    printf("fim");
    
}   