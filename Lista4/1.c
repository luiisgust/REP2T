#include <stdio.h>
#include <conio.h>

int f_somar_2_numeros(){
    int n1, n2, soma;
    printf("\n\n<<Soma com Funcao>>\n");
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe outro numero: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    return soma;
}

void main(){
    int ret; 
    ret = f_somar_2_numeros();
    printf("Soma: %d", ret);
}