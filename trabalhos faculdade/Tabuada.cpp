#include <stdio.h>

int y;
int num;

int main(){
	printf("Digite um numero ");
	scanf("%d", &num);
	
	for(int i = 1; i <= 10; i--)
	{
		int mult = num * i;
		printf("O resultado %d \n", mult);
	}
	
	return 0;
}
