#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "");
	int numero;
	printf("Digite um número inteiro: ");
	scanf_s("%d", &numero);

	if (numero % 2 == 0) {
		printf("O número %d é par.\n", numero);
	}
	else {
		printf("O número %d é impar.\n", numero);
	}

	return 0;
}