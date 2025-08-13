/* questões das estrelas com recursividade*/

#include <stdio.h>

void Estrela(int condicao, int vezes){
    
    if(vezes <= condicao){
        for(int i=0; i < vezes; i++){
            printf("* ");
        }
        printf("\n");
        
        vezes++;
        Estrela(condicao, vezes);
    }else{
        printf("fim");
    }
    
}

int main (){
    int condicao;
    
    printf("Digite a quantidade de estrelas que deseja: ");
    scanf("%d",&condicao);
    
    Estrela(condicao, 1);
}