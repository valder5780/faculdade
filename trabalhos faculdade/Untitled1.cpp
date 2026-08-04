//somar 2 numeros e mostrar o resultado
//vamos definir o valor na variavel
//vamos pedir para o usuario digitar os valores
#include<stdio.h>

		//i = input (Scanf)
		//o = output (printf)
		
int x;
int y;
int resultado;

int main()
{
	// "&" salva o endereço na memoria
	 
	printf("Digite o primeiro valor: ");
	scanf("%d", &x);
	printf("Digite o segundo valor: ");
	scanf("%d", &y);
	resultado = x + y;

	printf("Bom dia o resultado e %d" , resultado);
	return 0;
	
}
