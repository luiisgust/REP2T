#include <stdio.h>
#include <conio.h>

void leitor(){
    char nome[100];
    printf("INforme o primeiro nome: ");
    scanf("%s", nome);
    printf("Nome: %s", nome);
}

void main(){
    leitor();
}