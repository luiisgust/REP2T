#include <stdio.h>
#include <conio.h>

void multi(){
    int num1,num2,num3,num4,result;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe um numero: ");
    scanf("%d", &num2);
    printf("Informe um numero: ");
    scanf("%d", &num3);
    printf("Informe um numero: ");
    scanf("%d", &num4);

    result = num1*num2*num3*num4;

    printf("O resultado da multiplicacao e: %d", result);
}

void main(){
    multi();
}