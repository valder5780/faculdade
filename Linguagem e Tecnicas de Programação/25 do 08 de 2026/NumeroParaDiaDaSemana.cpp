#include <stdio.h>

int main()
{
	int numero;
	
	printf("Coloque um numero :");
	scanf("%d", &numero);
	
	while(true)
	{

		if(numero > 7  || numero < 1)
		{
			
			printf("O numero esta fora do range, coloque outro\n :");
			scanf("%d", &numero);
			
		
					
		}
		else
		{
			break;
		}
	}
	
	if(numero == 1)
		{
			printf("Domingo\n");
		}
		else if(numero == 2)
		{
			printf("Segunda\n");
		}
		else if(numero == 3)
		{
			printf("Terca\n");
		}
		else if(numero == 4)
		{
			printf("Quarta\n");
		}
		else if(numero == 5)
		{
			printf("Quinta\n");
		}
		else if(numero == 6)
		{
			printf("Sexta\n");
		}
		else if(numero == 7)
		{
			printf("Sabado\n");
		}
	
	switch(numero)
	{
		case 1:
			printf("Domingo");
			break;
		case 2: 
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4: 
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
	}

	return 0;
	
	
}
