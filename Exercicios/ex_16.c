/* recebe valor de x e y, analisa qual o maior e printa do menor até o maior*/
#include <stdio.h>

void Sla(int x, int y){
    if(x==y){
        printf("%d\n",x);
    }
    if ( x > y){
        printf("%d\n", y);
        y++;
        Sla(x,y);
        
    }
    if ( x < y){
        printf("%d\n", x);
        x++;
        Sla(x,y);
    }
        
}

int main() {
    
    int x, y;
    
    printf("Digita o numero de x: ");
    scanf("%d",&x);
    
    printf("Digita o numero de x: ");
    scanf("%d",&y);
    
    Sla(x,y);
}