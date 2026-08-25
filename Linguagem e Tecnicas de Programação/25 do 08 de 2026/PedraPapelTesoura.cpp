#include <stdio.h>

int main()
{
	char nome1[20];
	char JU;
	char nome2[20];
	char JD;
	
	int round = 1;
	int pontosU = 0;
	int pontosD = 0;
	printf("Vamos jogar jokenpo\n mas primeiro, jogador 1 coloque seu nome :");
	scanf(" %s", &nome1);
	printf("Jogador 2 coloque seu nome :");
	scanf(" %s", &nome2);
	
	
	while(true)
	{
		printf("\nRound %d \n", round);
		round++;
	
		printf("Ok, agora jogador 1, sem o jogador 2 ver escreva se voce vai jogar Rocha('R') papel('P') ou tesoura('T') (escreva a sigla em parenteses)\n :");
		scanf(" %c", &JU);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOk, agora jogador 2, escolha se voce vai querere jogar Rocha('R'), papel('P'), tesoura('T') (escreva a sigla em parenteses)\n");
		scanf(" %c", &JD);
		
		switch(JU)
		{
			case 'R':
				switch(JD)
				{
					case 'R':
						printf("Empate");
						break;
					case 'P':
						printf("%s Ganhou, parabens :)", nome2);
						break;
					case 'T':
						printf("%s Ganhou, parabens :)", nome1);
				}
				break;
			case 'P':
				switch(JD)
				{
					case 'R':
						printf("%s Ganhou, parabens :)", nome1);
						break;
					case 'P':
						printf("Empate");
						break;
					case 'T':
						printf("%s Ganhou, parabens :)", nome2);
						break;
				}
				break;
			case 'T':
				switch(JD)
				{
					case 'R':
						printf("%s Ganhou, parabens :)", nome2);
						break;
					case 'P':
						printf("%s Ganhou, parabens :)", nome1);
						break;
					case 'T':
						printf("Empate");
						break;
				}
				break;
		}
		printf("\nP1 %d, P2 %d", pontosU, pontosD);
	}
		
	
	
	
}
