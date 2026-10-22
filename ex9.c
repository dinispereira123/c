#include <stdio.h>
#include <locale.h>
int main(void) 
{
	setlocale(LC_ALL, "");
	int n;
	printf("Quantos números queres pôr na lista\n");
	scanf_s("%i", &n);

	return 0;
}