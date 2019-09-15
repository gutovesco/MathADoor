#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculos.h"
#include "funcao4.h"



int main()
{

    int m1, m2;

do{

    printf("Bem vindo ao MathADoor: \n--------------------------------------------------------");
    printf("\nEscolha no menu em seguida a conta que deseja realizar\n");
    printf("\n1 - Funcoes\n2 - Derivadas\n3 - Integrais\n0 - Sair\n ");
    printf("Ir para: ");
    scanf("%d", &m1);
    system("cls || clear");

    switch (m1)
    {
        case 0 :
            printf("Obrigado por usar nossa plataforma!");
            break;

        case 1 :
            printf("\nVoce escolheu a opcao de Funcoes\n---------------------------------------\n");
            printf("Escolha agora qual funcao voce quer realizar:\n");
            printf("1 - F(x) = ax^2+bx+c\n");
            printf("2 - F(x) = x^n\n");
            printf("3 - F(x) = b^x\n");
            printf("4 - F(x) = e^x\n");
            printf("5 - F(x) = log(x)\n");
            printf("6 - F(x) = ln(x)\n");
            printf("7 - F(x) = 1/x\n");
            printf("8 - F(x) = Sen(x)\n");
            printf("9 - F(x) = Cos(x)\n");
            printf("10 - F(x) = tg(x)\nIr para: ");
            scanf("%d", &m2);

            switch (m2)
            {

            case 0 :
                printf("Obrigado por usar nossa plataforma!");
                break;
            case 1 :
                exemplo();

                break;
            case 2 :
                break;
            case 3 :
                printf("escolheu a opcao 3");
                break;
            case 4 :
                funcao4();
                break;
            case 5 :
                printf("escolheu a opcao 5");
                break;
            case 6 :
                printf("escolheu a opcao 6");
                break;
            case 7 :
                printf("escolheu a opcao 7");
                break;
            case 8 :
                printf("escolheu a opcao 8");
                break;
            case 9 :
                printf("escolheu a opcao 9");
                break;
            case 10 :
                printf("escolheu a opcao 10");
                break;
            default:
                printf("Voce nao escolheu nenhuma das opcoes!");

            }
            break;

        case 2 :
            printf("Voce escolheu a opcao de Derivadas\n");
            break;

        case 3 :
            printf("Voce escolheu a opcao de Integrais\n");
            break;
        default:
            printf("Voce nao escolheu nenhuma das opcoes!");



    }}while(m1 !=0 && m2 != 0);
}
