/*Programa que recebe um numero e mostra sua taboada*/

#include <stdio.h>

int main(){

    int  numero_Recebido, numero, contador=0;

    printf("\n\nDigite um numero para saber sua tabuada: ");
    scanf("%d",& numero_Recebido);

    while (contador < 10)
    {
        contador++;

         printf("\n %d x %d = %d",numero_Recebido,contador,contador*numero_Recebido );

    }
    printf("\n\nFim!!");
   
}   