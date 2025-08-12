#include <stdio.h>
#include <conio.h>

void identificador(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("Positivo");
    } else {
        if(num <= 0){
            printf("Negativo");
        } else {
            printf("Numero invalido");
        }
    }
}

void main(){
    identificador();
}