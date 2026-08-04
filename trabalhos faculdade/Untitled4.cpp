//usando if e else
//programa para permitir ou negar entrada em uma festa
//se for menor de 18 anos - negado
//se for maior aprovado

#include <stdio.h>

int idade;
int main()
{
	printf("Digite sua idade, por favor :");
	scanf("%d", &idade); 
	
	if(idade < 18)
	{
		printf("Entrada NEGADA!!");
	}
	else if(idade < 120)
	{
		printf("*Entrada Permitida!! :) *");
	}
	else
	{
		printf("voce esta colocando uma idade falsa, sua entrada foi barrada!!! >:(");
	}
	return 0;
}
