/* */

#include <stdio.h>

int main(){

    char senha[20], senha_novamente[20], login[20], login_novamente[20];

    int contator = 0 ;

    printf("Criar conta\n\nUsuario:");
    scanf("%c",&login);

    printf("Senha:");
    scanf("%c",&senha);

    while (contator < 3){

        printf("\nDigite seu nome de usuario para logar no sistema! \n\n");

        printf("Usuario: ");
        scanf("Usuario: %c",&login_novamente);

        printf("Senha: ");
        scanf("Senha: %c",&senha_novamente);
        
        if (senha_novamente == senha || login_novamente == login){

            printf("\nBem Vindo!");
        }
        contator++;
        printf("Login ou senha incorretos restam  %d ",contator);   
    }

    if(contator == 0 ){
        printf("A quantidade de tentativas chegou ao limite, tente novamente mais tarde!!");
    }
   printf("\n\nFim do programa");
   
}