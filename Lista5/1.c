#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void verify(){
    int num;

    printf("<<Verificacao de numero>>\n");
    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Seu numero e par");
    } else {
        printf("Seu numero e impar");
    }
}

void main(){
    verify();
}