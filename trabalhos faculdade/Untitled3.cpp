
#include <stdio.h>

int ft;
int st;
int res;
bool val = true;

int main()
{
	while(val)
	{

		printf("Digite o primeiro numero :");
		scanf("%d", &ft);
		printf("Digite o segundo numero :");
		scanf("%d", &st);
		res = ft - st;
		printf("O resultado da subtracao e: %d", res);
		if(ft == -3)
		{
			val = false;
		}
	}
	return 0;
}
