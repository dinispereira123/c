#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int num, i;
	printf("Diz ai um número\n");
	scanf_s("%d", &num);
	for ( ;num>=0; num--) 
	{
		printf("%d\n", num);
	}
}