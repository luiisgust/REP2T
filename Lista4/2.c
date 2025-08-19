#include <stdio.h>
#include <conio.h>

int function_multi(){
    int n1, n2, n3, n4, mult;
    printf("\n\n<<Multiplicacao>>\n");
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe outro numero: ");
    scanf("%d", &n2);
    printf("Informe outro numero: ");
    scanf("%d", &n3);
    printf("Informe outro numero: ");
    scanf("%d", &n4);
    mult = n1*n2*n3*n4;
    return mult;
}

void main(){
    int ret;
    ret = function_multi();
    printf("Resultado: %d", ret);
}