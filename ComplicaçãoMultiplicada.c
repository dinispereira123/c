#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf_s("%d", &numero);

    if (numero % 3 == 0) {
        printf("%d e multiplo de 3 \n", numero);
    }
   if (numero % 5 == 0) {
        printf("%d e multiplo de 5 %d e multiplo de 3\n", numero);
    }
    else {
        printf("%d nao e multiplo de 3 e de 5 ao mesmo tempo.\n", numero);
    }
    if (numero == 0) {
        printf("Syntax Error\n");
    }

    return 0;
}