#include <stdio.h>
#include <string.h>

int quartoId1 = 101;
int quartoId2 = 102;
int quartoId3 = 103;
int quartoId4 = 104;
int quartoId5 = 105;

char hospede1[50];
char hospede2[50];
char hospede3[50];
char hospede4[50];
char hospede5[50];

int quantidadeDias1;
int quantidadeDias2;
int quantidadeDias3;
int quantidadeDias4;
int quantidadeDias5;

int reservado1 = 0;
int reservado2 = 0;
int reservado3 = 0;
int reservado4 = 0;
int reservado5 = 0;

float valorDiaria1 = 125;
float valorDiaria2 = 250;
float valorDiaria3 = 500;
float valorDiaria4 = 1000;
float valorDiaria5 = 2000;

void Consulta()
{

    int resposta;

    printf("\n==================================================\n");
    printf("\n              Quartos disponiveis\n");

    if (reservado1 == 0)
    {
        printf("\n%d - Social\nValor da diaria: R$ %.2f\n", quartoId1, valorDiaria1);
    }
    if (reservado2 == 0)
    {
        printf("\n%d - Executivo\nValor da diaria: R$ %.2f\n", quartoId2, valorDiaria2);
    }
    if (reservado3 == 0)
    {
        printf("\n%d - Suite\nValor da diaria: R$ %.2f\n", quartoId3, valorDiaria3);
    }
    if (reservado4 == 0)
    {
        printf("\n%d - Suite Master\nValor da diaria: R$ %.2f\n", quartoId4, valorDiaria4);
    }
    if (reservado5 == 0)
    {
        printf("\n%d - Suite Presidencial\nValor da diaria: R$ %.2f\n", quartoId5, valorDiaria5);
    }

    printf("\n==================================================\n");
}

void CheckIn()
{

    int opcao;

    Consulta();

    printf("\n                 Menu Reserva\n");

    printf("\nInforme codigo do quarto desejado: ");
    scanf("%d", &opcao);

    if (opcao == quartoId1)
    {
        printf("\nInforme seu primeiro nome: ");
        scanf("%s", hospede1);

        printf("\nQuantos dias deseja reservar sua estadia: ");
        scanf("%d", &quantidadeDias1);

        reservado1 = 1;
        printf("\n==================================================\n");
        
        printf("\nSua reserva foi realizada!\n\nHospede: %s\nQuarto: %d\nDias: %d\n", hospede1, quartoId1, quantidadeDias1);
    }
    else if (opcao == quartoId2)
    {
        printf("\nInforme seu primeiro nome: ");
        scanf("%s", hospede2);

        printf("\nQuantos dias deseja reservar sua estadia: ");
        scanf("%d", &quantidadeDias2);

        reservado2 = 1;
        printf("\n==================================================\n");
        
        printf("\nSua reserva foi realizada!\n\nHospede: %s\nQuarto: %d\nDias: %d\n", hospede2, quartoId2, quantidadeDias2);
    }
    else if (opcao == quartoId3)
    {
        printf("\nInforme seu primeiro nome: ");
        scanf("%s", hospede3);

        printf("\nQuantos dias deseja reservar sua estadia: ");
        scanf("%d", &quantidadeDias3);

        reservado3 = 1;

        printf("\n==================================================\n");
        
        printf("\nSua reserva foi realizada!\n\nHospede: %s\nQuarto: %d\nDias: %d\n", hospede3, quartoId3, quantidadeDias3);
    }
    else if (opcao == quartoId4)
    {
        printf("\nInforme seu primeiro nome: ");
        scanf("%s", hospede4);

        printf("\nQuantos dias deseja reservar sua estadia: ");
        scanf("%d", &quantidadeDias4);

        reservado4 = 1;

        printf("\n==================================================\n");
        
        printf("\nSua reserva foi realizada!\n\nHospede: %s\nQuarto: %d\nDias: %d\n", hospede4, quartoId4, quantidadeDias4);
    }
    else if (opcao == quartoId5)
    {
        printf("\nInforme seu primeiro nome: ");
        scanf("%s", hospede5);

        printf("\nQuantos dias deseja reservar sua estadia: ");
        scanf("%d", &quantidadeDias5);

        reservado5 = 1;

        printf("\n==================================================\n");
        printf("\nSua reserva foi realizada!\n\nHospede: %s\nQuarto: %d\nDias: %d\n", hospede5, quartoId5, quantidadeDias5);
    }
    else
    {
        printf("\n    Codigo invalido!!\n");
    }

    printf("\n==================================================\n");
}

void CheckOut(){
    int resposta2;

    printf("\n==================================================\n");
    
    printf("\n              Quartos Ocupados\n");

    if (reservado1 == 1)
    {
        
        printf("\n%d - Social\nHospede: %s", quartoId1, hospede1);
        
    }
    if (reservado2 == 1)
    {   

        printf("\n%d - Social\nHospede: %s", quartoId2, hospede2);

    }
    if (reservado3 == 1)
    {   
        
        printf("\n%d - Social\nHospede: %s", quartoId3, hospede3);

    }
    if (reservado4 == 1)
    {
        
        printf("\n%d - Social\nHospede: %s", quartoId4, hospede4);
        
    }
    if (reservado5 == 1)
    {
        printf("\n%d - Social\nHospede: %s", quartoId5, hospede5);
        
    }
    
    printf("\n\n==================================================\n");
    
    if (reservado5 == 1 | reservado4 == 1 | reservado3 == 1 | reservado2 == 1 | reservado1 == 1){
        printf("\nNumero do quarto: ");
        scanf("%d",&resposta2);
        
        switch(resposta2){
            case 101:{
                float custo1= valorDiaria1 * quantidadeDias1;
            
                printf("\nHospede: %s\nQuarto: %d\nValor da diaria: R$ %.2f\nDias: %d\nCusto: R$ %.2f", hospede1, quartoId1, valorDiaria1, quantidadeDias1, custo1 );
            
                reservado1 = 0;
                
                break;
            }
            case 102:{
                float custo2= valorDiaria2 * quantidadeDias2;
            
                printf("\nHospede: %s\nQuarto: %d\nValor da diaria: R$ %.2f\nDias: %d\nCusto: R$ %.2f", hospede2, quartoId2, valorDiaria2, quantidadeDias2, custo2);
            
                reservado2 = 0;
                
                break;
            }   
            case 103:{
                float custo3 = valorDiaria3 * quantidadeDias3;
            
                printf("\nHospede: %s\nQuarto: %d\nValor da diaria: R$ %.2f\nDias: %d\nCusto: R$ %.2f", hospede3, quartoId3, valorDiaria3, quantidadeDias3, custo3);
            
                reservado3 = 0;
                
                break;
            }
            case 104:{
                float custo4= valorDiaria4 * quantidadeDias4;
            
                printf("\nHospede: %s\nQuarto: %d\nValor da diaria: R$ %.2f\nDias: %d\nCusto: R$ %.2f", hospede4, quartoId4, valorDiaria4, quantidadeDias4, custo4);
            
                reservado4 = 0;
                
                break;
            }    
            case 105:{
                float custo5= valorDiaria5 * quantidadeDias5;
            
                printf("\nHospede: %s\nQuarto: %d\nValor da diaria: R$ %.2f\nDias: %d\nCusto: R$ %.2f", hospede5, quartoId5, valorDiaria5, quantidadeDias5, custo5);
            
                reservado5 = 0;
                
                break;
            default:
                printf("    Opçao invalida!");
            }
            
        }}
        else{
            printf("\n    Não a quartos ocupados!!");
        }
    printf("\n\n==================================================\n");
}

int main()
{

    int opcao;
    printf("\n==================================================\n");

    while (1)
    {

        printf("\n          Menu do Hotel Marias do Bairro\n\n1 - Consulta de Quarto\n2 - Check-in\n3 - Check-out\n4 - Sair");
        printf("\n\n==================================================\n\n");
        printf("    Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:
            Consulta();
            break;

        case 2:
            CheckIn();
            break;

        case 3:
            CheckOut();
            break;

        case 4:
            break;

        default:
            printf("    Opçao invalida!");
        }
        if (opcao == 4)
        {
            printf("\n\n==================================================\n\n");
            printf("    Ate Breve.\n");
            
            printf("\n\n==================================================\n\n");
            
            break;
        }
    }

    return 0;
}