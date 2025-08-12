#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu();
void calcular_idade();
void media_notas();
void maior_num();
void menor_num();

void calcular_idade(){
    int ano_nasc, ano_atual, idade;

    system("cls");
    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);
    printf("inofrme o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    printf("Sua idade e: %d\n", idade);
    menu();
}

void media_notas(){
    float nota1, nota2, nota3, result;

    system("cls");
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    result = (nota1+nota2+nota3) / 3;

    printf("A media e: %f\n", result);
    menu();
}

void maior_num(){
    int num1, num2;

    system("cls");
    printf("Informe um numero 1: ");
    scanf("%d", &num1);
    printf("Informe um numero 2: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O numero 1 e maior que o 2!");
    } else {
        if(num2 > num1){
            printf("O numero 2 e maior que o 1");
        } else {
            if(num1 == num2){
                printf("Os numeros são iguais!\n");
            }
        }
    }

    menu();
}
void menor_num(){
    int num1, num2;

    system("cls");
    printf("Informe um numero 1: ");
    scanf("%d", &num1);
    printf("Informe um numero 2: ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("O numero 1 e menor que o 2!");
    } else {
        if(num2 < num1){
            printf("O numero 2 e menor que o 1");
        } else {
            if(num1 == num2){
                printf("Os numeros são iguais!\n");
            }
        }
    }

    menu();
}

void menu(){
    int num;

    printf("<<Menu>>\n");
    printf("1  Calcular Idade\n");
    printf("2  Media de 3 Notas\n");
    printf("3  Maior Numero\n");
    printf("4  Menor Numero\n");
    printf("5  Sair\n");

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("Numero escolhido: %d\n", num);

    if(num == 1){
        calcular_idade();
    } else {
        if(num == 2){
            media_notas();
        } else {
            if(num == 3){
                maior_num();
            }else{
                if(num == 4){
                    menor_num();
                }else{
                    if(num == 5){
                        printf("Finalizado");
                    }else{
                        printf("Numero invalido");
                    }
                }
            }
        }
    }
}

void main(){
    menu();
}