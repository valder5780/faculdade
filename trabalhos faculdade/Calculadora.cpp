//calculadora em C 

#include <stdio.h>
float fv;
char txt;
float sv;
int result;

int main()
{
	printf("digite o primeiro numero :");
	scanf("%d", &fv);
	
	//return:	
	printf("Qual vai ser a operacao? (+, -, *, /):");
	scanf(" %c", &txt);
	
	if(txt != '+' && txt != '-' && txt != '*' && txt != '/')
	{
		
			//goto return;
	}

	printf("digite o segundo numero :");
	scanf("%d", &sv);
	
	if(txt = '+')
	{
		result = fv + sv;
	}
	else if(txt == '-')
	{
		result = fv - sv;
	}
	else if(txt == '*')
	{
		result = fv * sv;
	}
	else if(txt == '/')
	{
	
		result = fv / sv;
	}
	
	printf("o resultado e: %d", result);
	
	return 0;
}
