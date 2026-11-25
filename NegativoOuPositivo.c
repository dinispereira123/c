#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int número;
	printf("Digite um número: ");
	scanf_s("%d", &número);
	if (número < 0)
	{
		printf("O número é negativo.\n");
	}
	else if (número > 0)
	{
		printf("O número é positivo.\n");
	}
	else if (número == 0)
	{
		printf("Syntax Error.\n");
	}
	return 0;
}