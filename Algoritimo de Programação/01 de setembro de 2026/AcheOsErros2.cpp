#include <stdio.h>

int main()
{
    char jogador[30];
    int idade;
    int numero;
    float salario;
    float altura;

    printf("\n===== CADASTRO DE JOGADOR =====");

    printf("\n\nDigite o nome do jogador: ");
    scanf("%s", &jogador); // faltou o & antes da variavel

    printf("\nDigite a idade: ");
    scanf("%d", &idade); // a idade esta com %f logo ele espera um float nao um decimal %d

    printf("\nDigite o numero da camisa: ");
    scanf("%d", &numero); //faltou o & antes da variavel

    printf("\nDigite a altura: ");
    scanf("%f", &altura); // a altura é float, porem ele colocou para ler um decimal, tem que ser %f

    printf("\nDigite o salario: ");
    scanf("%f", &salario); //falta o & antes da variavel

    if(idade >= 18 && altura >= 1.80)
    {
        printf("\nJogador aprovado!");
    }
    else
    {
        printf("\nJogador reprovado!");
    }

    if(numero > 0 && numero < 100) //ponto e virgula no final do if
    {
        printf("\nNumero da camisa valido!");
    }
    //falta do else depois do erro

    printf("\n\n===== DADOS DO JOGADOR =====");

    printf("\nNome: %s", jogador);//ele ta lendo o nome como um numero, mas tem que ler como string %s
    printf("\nIdade: %d", idade); //ele trata a idade como um float, mas ela é um decimal %.0f -> %d 
    printf("\nCamisa: %d", numero);
    printf("\nAltura: %.2f", altura); //ele ta lendo a altura como decimal mas ela e float, tem que ser %.2f
    printf("\nSalario: %.2f", salario);

    return 0;
}
