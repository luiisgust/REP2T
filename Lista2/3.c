#include <stdio.h>
#include <conio.h>

void leitor(){
    char nome[100];
    char sobrenome[100];

    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Informe seu sobrenome: ");
    scanf("%s", sobrenome);

    printf("Seu nome e: %s %s", nome, sobrenome);
}

void main(){
    leitor();
}