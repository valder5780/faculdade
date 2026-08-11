#include<stdio.h>

int idade;

int main()
{
	printf("Qual sua idade: ");
	
	scanf("%d", &idade);
	
	if(idade >= 18)
	{
		printf("Entrada permitida");
	}
	else
	{
		printf("Entrada nao permitida");
	}
	return 0;
}
