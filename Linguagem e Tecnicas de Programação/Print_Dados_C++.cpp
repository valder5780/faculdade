#include<stdio.h>

char nome[30];
int data;
char time[30];
int idade;


int main()
{
	printf("Ola, por favor me informe alguns dados\nqual seu nome? : ");
	scanf("%s", &nome);
	printf("Em qual ano voce nasceu? :");
	scanf("%d", &data);
	printf("Qual time voce torce? : ");
	scanf("%s", &time);
	idade = 2026 - data;
	printf("\nObrigado %s, entao seu registro ficou:\nNome: %s\nAno de nascimento: %d\nIdade: %d/%d anos \nTime: %s", nome, nome, data, idade,idade-1, time);
	
	return 0;
}
