#include <stdio.h>

int fN;
int sN;
int main()
{
	printf("Vamos ver se sua nota esta na media\nDigite as suas 2 notas (0 ate 100)\nPrimeira nota: ");
	
	scanf("%d", &fN);
	printf("Segunda nota: ");
	scanf("%d", &sN);
	int r = (fN + sN) / 2;
	if(r >= 70)
	{
		printf("Aprovado, nota geral: %d", r);
	}
	else
	{
		printf("Reprovado, nota geral: %d", r);
	}
	return 0;
}
