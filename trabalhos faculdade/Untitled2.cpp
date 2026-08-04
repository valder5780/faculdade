//pedir 2 numeros pro usuario e multiplicar
#include <stdio.h>

int palmeiras;
int nao;
int mundial;

int main (){
	printf("escreva o primeiro numero: ");
	scanf("%d", &palmeiras);
	printf("escreva o segundo numero: ");
	scanf("%d", &nao);
	mundial = palmeiras * nao;
	printf("O resultado do sem mundial = %d", mundial);
}
