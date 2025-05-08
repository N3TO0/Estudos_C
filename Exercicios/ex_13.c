#include <stdio.h>
#include <string.h>

int main () {

    char nome[20], nome2[20];  

    printf("\ndigite seu nome: ");
    scanf("%s",&nome);

    strcpy(nome2, nome);

    printf("\n\n%d\n",strlen(nome));
    printf("%s\n",nome2);






}