/*Programa que recebe nota e verifica se esta entre 0 e 10 caso contrario ira repetir até acertar*/

#include <stdio.h>

int main(){
    int nota;

    while (1){

        printf("\n\nDigite uma nota de 0 a 10: ");
        scanf("%d",&nota);

        if(nota > 0 && nota < 10 ){
            printf("\n\nparabens vc digitou correto!");
            break;
        }
    }
    printf("\n\nfim do programa");
}