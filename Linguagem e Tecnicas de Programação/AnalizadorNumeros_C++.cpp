#include <stdio.h>

int num;

int main()
{
	printf("digite um numero para ser analisado : ");
	scanf("%d", &num);
	if(num > 0)
	{
		printf("O numero e positivo");
	}
	else if(num < 0)
	{
		printf("O numero e negativo");
	}
	else
	{
		printf("O numero e zero");
	}
	
	if(num % 2 == 0)
	{
		printf(" e par");
	}
	else
	{
		printf(" e impar");
	}
	
	return 0;
	
}
