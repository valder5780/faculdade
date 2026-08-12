#include <stdio.h>

char nome[80];
int nota;

int main()
{
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("Digite a nota do aluno: ");
	scanf("%d", &nota);

	if(nota >= 60)
	{
		printf("%s esta aprovado com a nota: %d", nome, nota);
	}
	else
	{
		printf("%s sera reprovado por causa da nota %d ser menor que 60", nome, nota);
	}
	
	return 0;
}
