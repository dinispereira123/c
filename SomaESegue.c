#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	int a, soma,n;
	printf("quantos números queres somar? ");
	scanf_s("%d", &n);
	soma = 0;
	for(int i = 0; i < n; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf_s("%d", &a);
		soma += a;
	}
	printf("A soma dos %d números é: %d\n", n, soma);
	return 0;
}