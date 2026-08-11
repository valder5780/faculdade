#include <stdio.h>

char p = '%';
int salario;
int porcentagem;


int main()
{
	printf("Vamos calcular quanto ficaria um aumento de x%c no salario de um funcionario\n", p);
	printf("Digite seu salario: ");
	scanf("%d", &salario);
	printf("Digite a porcentagem de aumento: ");
	scanf("%d", &porcentagem);
	
	int calc = salario + salario * porcentagem / 100;
	printf("Com um aumento de %d%c o salario sera: %d", porcentagem, p, calc);
	
	return 0;
}
