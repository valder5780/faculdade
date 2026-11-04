#include <stdio.h>
#include <string.h>


int main()
{
	bool cadastros[100]; 
	char escola[100][50]; 
	char tema[100][50]; 
	char data[100][10]; 
	char publicoAlvo[100][25];
	char responsavel[100][50]; 
	int participantes[100]; 
	char sitAtv[100][10]; //realizadas/canceladas/andamento(planejada)
	
	char resposta[50]; //revisar --------_***************************
	int indexLivre;
	 
	printf("Voce quer cadastrar uma acao? s/n\n:");
	scanf("%s", &resposta);

	 
	 //checagem de qual o proximo index livre
	for(int i = 0; i > 100; i++)
	{
		if(cadastros[i] == false)
	 	{
	 		indexLivre = i;
			break;	
		}
	}
	
	if(resposta == 's' || resposta == 'S')
	{
		//revisar
	 	printf("se voce mudou de ideia digite 'voltar'\n");
	 	
	 	printf("digite o nome da escola\n:");
	 	scanf("%s", &resposta);
	 	escola[indexLivre] = resposta
	 	
	 	printf("digite o tema\n:");
	 	scanf("%s", &tema[indexLivre]);
	 	
	 	printf("digite a data de previsao para acontecer a acao, no formato DD/MM/AAAA\n:");
	 	scanf("%s", &data[indexLivre]);

	 	printf("digite o publico alvo\n:");
	 	scanf("%s", &publicoAlvo[indexLivre]);
	 	
	 	printf("digite o nome do responsavel pela acao\n:");
	 	scanf("%s", &responsavel[indexLivre]);
	 	
	 	printf("digite o numero de participantes\n:");
	 	scanf("%d", &participantes[indexLivre]);
	 	
	 	printf("Qual a situacao da atividade (realizadas/canceladas/andamento)\n:");
	 	scanf("%s", &sitAtv[indexLivre]);
	 	
	 	printf("escola: %s \ntema: %s\ndata prevista: %s\npublico alvo: %s\nresponsavel pela acao: %s\nnumero de participantes: %d\nsituacao: %s", escola[indexLivre], tema[indexLivre], data[indexLivre], publicoAlvo[indexLivre], responsavel[indexLivre], participantes[indexLivre], sitAtv[indexLivre]);
	 	
	}
	 
	return 0;
}
