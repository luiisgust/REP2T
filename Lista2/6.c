#include <stdio.h>
#include <conio.h>

void calc(){
    float num1, num2, num3, result;

    printf("Informe um numero: ");
    scanf("%f", &num1);
    printf("Informe um numero: ");
    scanf("%f", &num2);
    printf("Informe um numero: ");
    scanf("%f", &num3);

    result = (num1 - num2) / num3;

    printf("O resultado e: %f", result);
}

void main(){
    calc();
}