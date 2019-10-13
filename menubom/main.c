#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcao1.c"
#include "funcao2.c"
#include "funcao3.c"
#include "funcao4.c"
#include "funcao5.c"
#include "funcao6.c"
#include "funcao7.c"
#include "funcao8.c"
#include "funcao9.c"
#include "funcao10.c"
/*
double der1x1(double x, double h, double a, double b, double c){

double w, derivadax1;

w = x + h;
derivadax1 = ((funcao1x1(w,a,b,c) - funcao1x1(x,a,b,c)) / h);
return (derivadax1);
}

double der1x2(double x, double n, double h){

double w, derivadax2;

w = x + h;
derivadax2 = ((funcao1x2(w,x2) - funcao1x2(x,x2)) / h);
return (derivadax);
}
*/

double der2(double x, double n, double h){

double w, derivada;

w = x + h;
derivada = ((funcao2(w,n) - funcao2(x,n)) / h);
return (derivada);
}

double der3(double b, double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao3(b,w) - funcao3(b,x)) / h);
return (derivada);
}

double der4(double x, double h, double euler){

double w, derivada;

w = x + h;
derivada = ((funcao4(euler,w) - funcao4(euler,x)) / h);
return (derivada);
}

double der5(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao5(w) - funcao5(x)) / h);
return (derivada);
}

double der6(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao6(w) - funcao6(x)) / h);
return (derivada);
}

double der7(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao7(w) - funcao7(x)) / h);
return (derivada);
}

double der8(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao8(w) - funcao8(x)) / h);
return (derivada);
}

double der9(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao9(w) - funcao9(x)) / h);
return (derivada);
}

double der10(double x, double h){

double w, derivada;

w = x + h;
derivada = ((funcao10(w) - funcao10(x)) / h);
return (derivada);
}

int main()
{

    int m1, m2, m3;
    double derivada, w, h, logaritmo_xbase10, n, x, resultado, a, b, c, x1, x2, resultado2;
    double euler = 2.718281828;

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
    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    resultado = funcao1x1(a, b, c);
    resultado2 = funcao1x2(a, b, c);

    printf("x1: %lf , x2: %lf\n", resultado, resultado2);
                break;


            case 2 :
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = funcao3(b, x);
    printf("Resultado da funcao: %lf\n", resultado);
                break;


            case 3 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de n: ");
    scanf("%lf", &n);

    resultado = funcao2(x, n);
    printf("Resultado da funcao: %lf\n", resultado);
                break;


            case 4 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = funcao4(x,euler);
    printf("Resultado da funcao: %lf\n", resultado);
                break;


            case 5 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x == 0){

    printf("O valor de x nao pode ser 0!"); break;
}

    logaritmo_xbase10 = funcao5(x);
    printf("Logaritmo de %.2lf na base 10 = %lf \n",x,logaritmo_xbase10);
                break;


            case 6 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x == 0){

    printf("O valor de x nao pode ser 0!"); break;
}

    resultado = funcao6(x);
    printf("Ln de %.2lf  = %lf \n",x,resultado);
                break;


            case 7 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x == 0){

    printf("O valor de x nao pode ser 0!"); break;
}

    resultado = 1 / funcao7(x);
    printf("Resultado de 1/x = %lf \n",resultado);
                break;


            case 8 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = funcao8(x);
    printf("Resultado de seno(X) = %lf\n", resultado);
                break;


            case 9 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = funcao9(x);
    printf("Resultado de cosseno(X) = %lf\n", resultado);
                break;


            case 10 :
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = funcao10(x);
    printf("Resultado de tangente(X) = %lf\n", resultado);
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


            case 1 :/*
            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            printf("Digite o valor de a: ");
            scanf("%lf", &a);

            printf("Digite o valor de b: ");
            scanf("%lf", &b);

            printf("Digite o valor de c: ");
            scanf("%lf", &c);

            resultado = der1x1(a,b,c,h);
            resultado2 = der1x2(a,b,c,h);

            printf("%Derivada de x1: %lf\nDerivada de x2: %lf", resultado, resultado2);*/
            break;


            case 2 :

            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de n: ");
            scanf("%lf", &n);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der2(x,n,h);

            printf("Derivada de x^n: %lf", resultado);
            break;

            case 3:
            printf("Digite o valor de b: ");
            scanf("%lf", &b);

            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der3(b,x,h);

            printf("Derivada de b^x: %lf\n", resultado);
            break;

            case 4:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der4(x,h,euler);
            printf("Derivada de e^x: e^x\n");
            printf("Derivada de e^%lf: %lf\n",x, resultado);
            break;

            case 5:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der5(x,h);
            printf("Derivada de log10: %lf\n", resultado);
            break;

            case 6:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der6(x,h);
            printf("Derivada de ln(x): %lf\n", resultado);
            break;

            case 7:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der7(x,h);
            printf("Derivada de 1/x: %lf\n", resultado);
            break;

            case 8:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der8(x,h);
            printf("Derivada de seno(x): %lf\n", resultado);
            break;

            case 9:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der9(x,h);
            printf("Derivada de cosseno(x): %lf\n", resultado);
            break;

            case 10:
            printf("Digite o valor de x: ");
            scanf("%lf", &x);

            printf("Digite o valor de h: ");
            scanf("%lf", &h);

            resultado = der10(x,h);
            printf("Derivada de tg(x): %lf\n", resultado);
            break;

        }

    }}while(m1 !=0 && m2 != 0);
}
