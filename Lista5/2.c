#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

float calc_area(){
    float r, area;

    system("cls");
    printf("<<Calculo da area do circulo>>\n");
    printf("Informe o raio da area do circulo: ");
    scanf("%f", &r);

    area = 3.14 * ( r * r );

    return area;
}

float calc_perimetro(){
    float r, area;

    system("cls");
    printf("<<Calculo do perimetro do circulo>>\n");
    printf("Informe o raio da area do circulo: ");
    scanf("%f", &r);

    area = 3.14 * 2 * r;

    return area;
}

void menu(){
    int op;

    do{
        system("cls");
        printf("<<Menu dos circulos>>\n");
        printf("1 - Calcular area circulo\n");
        printf("2 - Calcular perimetro circulo\n");
        printf("3 - Finalizar\n");
        printf("Informe um numero: ");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("Area do circulo: %0.02f", calc_area());
                break;
            case 2:
                printf("Perimetro do circulo: %0.02f", calc_perimetro());
                break;
            case 3:
                printf("Fim!");
                break;
            default:
                printf("Opcao invalida");
        }
    printf("\n\n\n");
        system("pause");
    } while(op!=3);
}

void main(){
    menu();
}
