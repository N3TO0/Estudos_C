/* programa que solicita 10 valores e informa a quantidade de numeros pares e impares.  */

#include <stdio.h>

int main(){
    int num, contador=0;
    int par = 0, impar = 0;
    
    printf("\nDigite 10 valores\n");

    while(contador<10){
    contador++;   
    printf("\nNumero %d:",contador);
    scanf("%d",&num);
    if(num % 2 == 0) par ++;
    else impar++;
    
    }

    printf("\n\nQuantidade de numeros pares: %d\nQuantidade de numeros impares: %d\n\n", par,impar);  
}