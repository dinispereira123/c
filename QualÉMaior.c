#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	int num1, num2, num3;
	printf("Digite o primeiro número: ");
	scanf_s("%d", &num1);
	printf("Digite o segundo número: ");
	scanf_s("%d", &num2);
	printf("Digite o terceiro número: ");
	scanf_s("%d", &num3);

	if (num1 > num2 && num1 > num3) {
		printf("O maior número é: %d\n", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("O maior número é: %d\n", num2);
	}
	else {
		printf("Os números são iguais.\n");
	}

	return 0;
}