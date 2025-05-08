#include <stdio.h>


int main () {

    int entrada ;
    
    printf("\nEscolha as opcoes:\n\nopcao: [1] - Dia 1\nopcao: [2] - Dia 2\nopcao: [3] - Dia 3\nopcao: [4] - Dia 4\nopcao: [5] - dia 5\nopcao: [6] - Dia 6\nopcao: [7] - dia 7\n\nopcao: ");
    scanf("%d",&entrada);

    switch(entrada){

        case 1:
            printf("\nSegunda-feira 😥");
            break;
        case 2:
            printf("\nTerça-feira 😪");
            break;
        case 3:
            printf("\nQuarta-feira 😑");
            break;
        case 4:
            printf("\nQuinta-feira 😐");
            break;
        case 5:
            printf("\nSexta-feira 🙂");
            break;
        case 6:
            printf("\nSabado 😁");
            break;
        case 7:
            printf("\nDomingo 😋");
            break;
        default:
            printf("\nOpcao invalida!!\n");
    }
    printf("\n\nFim\n");
}