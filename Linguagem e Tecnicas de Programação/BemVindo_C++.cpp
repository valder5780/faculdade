#include <stdio.h>

char nome[20];

int main()
{
	printf("Ola, Digite seu nome:\n");
	scanf("%s", &nome);
	printf("Seja bem vindo %s", nome);
	
	return 0;
}
