#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.h"

double der(double x, double n){

double w, h, derivada;

printf("Digite o valor de h: \n");
scanf("%lf", &h);

w = x + h;
derivada = ((funcao2(w,n) - funcao2(x,n)) / h);
return (derivada);
}

int main()
{

    int m1, m2, m3;
    double derivada, x, w, h, n, resultado, vf;

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
                funcao1();
                break;
            case 2 :

                funcao2();

                if (n == 0){
                printf("O valor de n nao pode ser 0!\n");
                }

                else if (n < 0){
                printf("O valor de n nao pode ser menor que 0!\n");
                }

                else if (x > 0){
                printf("O resultado da funcao eh: %.2lf\n", resultado);
                }

                else{

                printf("O resultado eh: %.2lf\n", resultado);
                }
                break;
            case 3 :
                funcao3();
                break;
            case 4 :
                funcao4();
                break;
            case 5 :
                funcao5();
                break;
            case 6 :
                funcao6();
                break;
            case 7 :
                funcao7();
                break;
            case 8 :
                funcao8();
                break;
            case 9 :
                funcao9();
                break;
            case 10 :
                funcao10();
                break;
            default:
                printf("\n");
                printf("Voce nao escolheu nenhuma das opcoes!\n");

            }
            break;

        case 2 :
            printf("Voce escolheu a opcao de Derivadas\n");
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
            scanf("%d", &m3);

            switch (m3)
            {

            case 0 :
                printf("Obrigado por usar nossa plataforma!");
                break;
            case 1 :
                printf("oi");
                break;
            case 2 :

                printf("Digite o valor de x: ");
                scanf("%lf", &x);

                printf("Digite o valor de n: ");
                scanf("%lf", &n);

                vf = der(x,n);

                printf("%O resultado eh: %lf\n", vf);

                break;

            default:
                printf("\n");
                printf("Voce nao escolheu nenhuma das opcoes!\n");
            }
            break;

        case 3 :
            printf("Voce escolheu a opcao de Integrais\n");
            break;
        default:
            printf("Voce nao escolheu nenhuma das opcoes!");



    }}while(m1 !=0 && m2 != 0);
}
