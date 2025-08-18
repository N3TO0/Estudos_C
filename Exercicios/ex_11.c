/* função */

#include <stdio.h>

int function1 (parametro1){
    if (parametro1 % 2 == 0){
        return printf("%d é um numero par!",parametro1);
    }else{
        return printf("%d é um numero impar!,parametro1");
    }
}

int main(){
    
    int parametro1;

    printf("\nDigite o numero: ");
    scanf("%d",&parametro1);

    function1(parametro1);
    printf("toppp");

}