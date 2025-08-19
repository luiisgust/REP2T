#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int calc_id(){
    int aa, an, idade;
    
    system("cls");
    printf("<<Calculo de idade>>\n");
    printf("Informe o ano atual: ");
    scanf("%d", &aa);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);

    idade = aa - an;
    return idade;
}

float calc_m(){
    float n1, n2, n3, n4, media;

    system("cls");
    printf("<<Calculo de Media>>\n");
    printf("Informe sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe sua segunda nota: ");
    scanf("%f", &n2);
    printf("Informe sua terceira nota: ");
    scanf("%f", &n3);
    printf("Informe sua quarta nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/ 4;

    return media;
}

int mult(){
    int n1, n2, mult;

    system("cls");
    printf("<<Calculo de 2 numeros>>\n");
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe outro numero: ");
    scanf("%d", &n2);

    mult = n1 * n2;

    return mult;
}

float division(){
    float n1, n2, result;

    system("cls");
    printf("<<Divisao de 2 numeros>>\n");
    printf("Informe um numero: ");
    scanf("%f", &n1);
    printf("Informe outro numero: ");
    scanf("%f", &n2);

    result = n1 / n2;

    return result;
}

void menu(){
    int op;

    do{
        system("cls");
        printf("<<Escolha a opcao>>\n");
        printf("1 - Calcular idade\n");
        printf("2 - Media de 4 notas\n");
        printf("3 - Multiplicacao de 2 numero\n");
        printf("4 - Divisao de 2 numeros\n");
        printf("5 - Sair\n");
        printf("Informe uma opcao: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("Idade: %d", calc_id());
                break;
            case 2:
                printf("Media 4 notas: %0.02f", calc_m());
                break;
            case 3:
                printf("Multiplicacao: %d", mult());
                break;
            case 4:
                printf("Divisao: %0.02f", division());
                break;
            case 5:
                printf("Fim!");
                break;
            default:
                printf("Opcao invalida");
        }

        printf("\n\n\n");
        system("pause");
    } while(op!=5);
}

void main(){
    menu();
}