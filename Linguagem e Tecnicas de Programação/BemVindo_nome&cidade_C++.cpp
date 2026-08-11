#include<stdio.h>


char cidade[35];
char nome[35];

int main(){
	
	//sempre o %x do tipo, o x é a primeira letra, so no int que é %d de decimal e na string (char y[z]) que é %s de string
	
	printf("Por favor digite o seu nome: ");
	scanf("%s", &nome);
	printf("Por favor digite o nome de sua cidade: ");
	scanf("%s", &cidade);
	printf("Obrigado, seja bem vindo %s de %s", nome, cidade);
	return 0;
}

