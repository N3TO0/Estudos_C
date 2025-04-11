/* Programa que calcula e mostra a media aritmetica dos numeros pares compreeendidos entre 23 e 483*/

#include <stdio.h>


int main(){
    int contador=0, numero=23, soma=0;

 printf("\ninicio\n\n");

    while (numero >= 23 && numero <= 483)
    {
        if(numero %2 == 0){
            soma+= numero;
            contador++;
        }
        numero++;
    }
    printf("\n\na aritmetica e : %d",soma/contador);

    printf("\n\nFim!");
}   