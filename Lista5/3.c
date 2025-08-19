#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

float calc_grau(){
    float f, c;

    printf("<<Calculo de Fahrenheit para grau>>\n");
    printf("Informe quantos graus esta em Fahrenheit: ");
    scanf("%f", &f);

    c = ((f-32)/9)*5;

    return c;
}

void  main(){
    printf("O resutlado e: %0.02f graus Celsius", calc_grau());
}