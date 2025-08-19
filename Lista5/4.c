#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void calc_media(){
    float n1, n2, n3, media;

    if(media < 7){
    printf("<<Calculo de media>>\n");
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segudna nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    } else{
        if (media >= 7){
            printf("Parabens, voce foi aprovado!\n");
        } else {
            printf("Reprovado! Tente outra vez!\n");
        }
    }   
    media = (n1 + n2 + n3) / 3;
}

void main(){
    calc_media();
}