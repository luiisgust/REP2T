#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int calc_id(){
    int aa, an, idade;

    printf("<<Calculo de idade>>\n");
    printf("Informe o ano atual: ");
    scanf("%d", &aa);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);

    idade = aa - an;
    return idade;
}

void main(){
    printf("Sua idade a igual a %d anos!", calc_id());
}