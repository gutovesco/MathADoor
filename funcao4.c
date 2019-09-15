#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcao4.h"

float funcao4(){
    float e, expoente, resultado;
    e = 2,718;
    printf("Entre com o valor do expoente: ");
    scanf("%f", &expoente);
    resultado = pow(e, expoente);
    printf("Resultado da operacao: %f\n", resultado);

}
