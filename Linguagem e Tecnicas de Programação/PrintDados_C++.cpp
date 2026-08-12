#include <stdio.h>

char nome[40];
int idade;
float altura;
float peso;

int main()
{
	printf("Nos passe alguns dados.\n");
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite sua altura (padrao 0.00 em metros): ");
	scanf("%f", &altura);
	printf("Digite seu peso (padrao 0.00 em Kilogramas): ");
	scanf("%f", &peso);
	
	printf("O registro ficou:\nNome: %s\nIdade: %d\nAltura: %.2fm\nPeso: %.2fKg", nome, idade, altura, peso);
	
	return 0;
}



