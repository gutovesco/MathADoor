#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

double funcao1()
{
    double a, b, c, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    x1 = (-b + (sqrt(b*b-4*a*c)))/(2*a);
    x2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);

    if (x1 < 0 || x2 == 0){
        printf("A equacao nao possui numeros reais!");
}

    else{
        printf("Valor de x1: %.2lf\nValor de x2: %.2lf\n\n", x1, x2);

    }


}

double funcao2()
{
    double x, n, resultado;

    resultado = pow(x,n);

    return (resultado);
}

float funcao3()
{
    float b, funcao, expoente;

    //F(X)=B^X
    //Função Exponencial

    printf("Entre com o valor de B da funcao: ");
    scanf("%f", &b);
    printf("Entre com o valor do expoente: ");
    scanf("%f", &expoente);

     if (b == 0 && b == 1){
    printf("\nO resultado da funcao eh 1\n");
 }
 if (b > 1) {

    funcao = pow(b, expoente);

    printf("\nO grafico da funcao eh crescente e o resultado eh: %.2f\n", funcao);}

    if (b > 0 && b < 1){
        funcao = pow(b, expoente);

    printf("\nO grafico da funcao eh decrescente e o resultado eh: %.2f\n", funcao);}

}

float funcao4()
{
    // 6- e^x

    float expoente, resultado;

    printf("Entre com o valor do expoente: ");
    scanf("%f", &expoente);
    resultado = pow(M_E, expoente);
    printf("Resultado da operacao: %.2f\n", resultado);

}

double funcao5()
{
    double logaritmo_xbase10, x;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if (x == 0){

    printf("O valor de x nao pode ser 0!");
}

    logaritmo_xbase10 = log10(x);
    printf("Logaritmo de %.2f na base 10 = %.2f \n",x,logaritmo_xbase10);

}

double funcao6()
{
double ln, asx;

printf("Insira um valor para x: \n");
scanf("%lf", &asx);

if (asx > 0){

ln = log(asx);

printf("O resultado eh: %.2lf\n", ln);
}

else{

printf("Valor inserido invalido!\n");
}

}

double funcao7()
{
    double x, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);


    resultado = 1/x;

    if (x == 0){

        printf("O valor de x nao pode ser 0!");
    }

    else{

        printf("O resultado da funcao eh: %.2lf\n", resultado);
    }

}

float funcao8()
{
    float X;

    printf("F(x)= seno(X) \nInsira o valor de X em graus para esta funcao: ");
    scanf("%f", &X);
    X = sin(X);
    printf("%.2f\n", X);
}

float funcao9()
{
    float X;

    printf("F(x)= cos(X) \nInsira o valor de X para esta funcao: ");
    scanf("%f", &X);
    X = cos(X);
    printf("%.2f\n", X);
}

float funcao10()
{
    float X;

    printf("F(x)= tg(X) \nInsira o valor de X para esta funcao: ");
    scanf("%f", &X);
    X = tan(X);
    printf("%.2f\n", X);
}
#endif // FUNCOES_H_INCLUDED
