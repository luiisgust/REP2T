#include <stdio.h>
#include <conio.h>

void somador(){
    int num1=0, num2=0, soma;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe um numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado e: %d", soma);
}

void main(){
    somador();
}