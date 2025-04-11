/*Programa que recebe 10 valores, e faz a soma do maior valor com o menor valor.*/

#include <stdio.h>


int main(){

    int valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10 ;
    int maior, menor, soma=0;

    printf("\nDigite 10 valores para saber o meior numero e o menor e a soma entre eles: ");

    printf("\n\nValor 1:");
    scanf("%d",&valor1);
    maior = valor1;                            /*verificação 1*/
    menor = valor1;
    

    printf("\n\nValor 2:");
    scanf("%d",&valor2);
    if (valor2 > maior) maior = valor2 ;        /*verificação 2*/
    if (valor2 < menor) menor = valor2 ;

    printf("\n\nValor 3:");
    scanf("%d",&valor3);
    if (valor3 > maior) maior = valor3 ;        /*verificação 3*/
    if (valor3 < menor) menor = valor3 ;

    printf("\n\nValor 4:");
    scanf("%d",&valor4);                    
    if (valor4 > maior) maior = valor4 ;        /*verificação 4*/
    if (valor4 < menor) menor = valor4 ;

    printf("\n\nValor 5:");
    scanf("%d",&valor5);                    
    if (valor5 > maior) maior = valor5 ;        /*verificação 5*/
    if (valor5 < menor) menor = valor5 ;

    printf("\n\nValor 6:");
    scanf("%d",&valor6);                       
    if (valor6 > maior) maior = valor6 ;        /*verificação 6*/
    if (valor6 < menor) menor = valor6 ;

    printf("\n\nValor 7:");
    scanf("%d",&valor7);                       
    if (valor7 > maior) maior = valor7 ;        /*verificação 7*/
    if (valor7 < menor) menor = valor7 ;

    printf("\n\nValor 8:");
    scanf("%d",&valor8);                       
    if (valor8 > maior) maior = valor8 ;        /*verificação 8*/
    if (valor8 < menor) menor = valor8 ;

    printf("\n\nValor 9:");
    scanf("%d",&valor9);                       
    if (valor9 > maior) maior = valor9 ;        /*verificação 9*/
    if (valor9 < menor) menor = valor9 ;

    printf("\n\nValor 10:");
    scanf("%d",&valor10);                   
    if (valor10 > maior) maior = valor10 ;        /*verificação 10*/
    if (valor10 < menor) menor = valor10 ;

    soma= maior + menor;
    printf("\n\nValores:\n\nMaior: %d\n\nMenor: %d\n\nSoma entre eles: %d\n\n", maior, menor, soma);
   
    printf("fim");
    
}   