#include <math.h>
static double funcao1x1(double a, double b, double c){
    float x1;
    x1 = (-b + (sqrt(b*b-4*a*c)))/(2*a);
    return (x1);}

static double funcao1x2(double a, double b, double c){
    float x2;
     x2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);
    return (x2);}
