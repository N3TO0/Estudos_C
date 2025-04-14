#include <stdio.h>

int main(){
    int num, a=0;
    int par = 0, impar = 0;
    
    printf("\nDigite 10 valores\n");


    while(a<10){
    a++;   
    printf("\nNumero %d:",a);
    scanf("%d",&num);
    if(num % 2 == 0) par ++;
    else impar++;
    
    }

    printf("\n\nQuantidade de numeros pares: %d\nQuantidade de numeros impares: %d\n\n", par,impar);

     






}