#include <stdio.h>

int num[20];
int NPComp;
int maiorN;


int main()
{
	printf("Vamos comparar numeros");
	printf("Quantos numeros voce quer comparar? \n digite aqui(Max 20):");
	scanf("%d", &NPComp);
	printf("Ok, agora digite eles.\n");
	for(int i = 0; i < NPComp; i++)
	{
		printf("numero %d -> ", i + 1);
		scanf("%d", &num[i]);
		
	}
	
	maiorN = num[0];
	
	for(int val; val < NPComp; val++)
	{
		if(maiorN < num[val])
		{
			maiorN = num[val];
		}
	}
	
	printf("O maior numero e: %d", maiorN);
	
	return 0;
}
