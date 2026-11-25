#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int notas;
	printf("Digite a nota:");
	scanf_s("%d", &notas);
	if (notas >= 9.5)
	{
		printf("Aprovado");
	}
	else
	{
		printf("Reprovado");
	}
	return 0;
}