#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(double x, double n){

return pow(x,n);
}

int main()
{
    int i = 1;
    double a,b, N;
    double sum = 0;
    double h;
    double x = 0;
     double n, resultado;

    printf("Valor de a: ");
    scanf("%lf", &a);

    printf("Valor de b: ");
    scanf("%lf", &b);

    printf("Valor de n: ");
    scanf("%lf", &n);

    printf("Numero de particoes: ");
    scanf("%lf", &N);

    h = (b-a)/N;

    printf("valor de h: %lf\n\n", h);

    for (i=1;i<=N-1;i++){

   x = a + (i*h);
   sum = sum + potencia(x,n);
    }

    printf("%lf", sum);

    resultado = (((potencia(a,n) + (2*sum) + potencia(b,n))) * h) / 2;
    printf("\n%lf\n", potencia(a,n));
      printf("%lf\n", potencia(b,n));

    printf("\nResultado: %lf", resultado);

    /*

    funcaodaintegral();

        resultado = (((k(a,n) + (2*sum) + potencia(b,n))) * h) / 2;
    printf("\n%lf\n", potencia(a,n));
      printf("%lf\n", potencia(b,n));

    printf("\nResultado: %lf", resultado);
    */
    return 0;
}
