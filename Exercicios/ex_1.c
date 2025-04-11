/*Recebe numero inteiro e soma todos os numeros antecessores deles até chegar no numero de entrada.*/

#include <stdio.h>

int main(){

    int numero_inteiro_possitivo ;
    int numero_inicial = 1;
    int numero_somado = 0;

    printf("\nDigite um numero inteiro possitivo: ");
    scanf("%d",&numero_inteiro_possitivo) ;

    while(numero_inicial <= numero_inteiro_possitivo)
    {
        numero_somado += numero_inicial ;
        
        printf("\nnumero inicial: %d",numero_inicial);
        printf("\nnumero somaro: %d \n",numero_somado);
  
        numero_inicial+= 1 ;

    }
}