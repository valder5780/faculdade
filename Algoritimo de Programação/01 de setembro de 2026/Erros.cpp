#include <stdio.h>

int main()

{
    char nome[10];
    int idade;
    float altura;
    int op = 5; 

    printf("\n --- PARQUE DE DIVERSAO ---");



    printf("\nInsira seu nome: ");
    scanf("%s", &nome); //faltou o & antes do nome, assim ele não salva o nome na variavel; esta com %d e não %s dai ele le o valor como numero e não como string

    printf("\nInsira sua idade: ");
    scanf("%d", &idade); //a idade esta lendo comko %f e não %d então ela espera guardar um numero float e nao um decimal que é o caso

    printf("\nInsira sua altura: ");
    scanf("%f", &altura); //a altura esta lendo como %d e não %f então ela espera guardar um numero decimal e não um float
    


    if(idade > 16 && altura > 1.60){
        printf("\nEntrada permitida para o brinquedo");
    }
    else{
        printf("\nEntrada negada para o brinquedo");
    }

    printf("\nNome: %s", nome); // estava %d nao %s, então ela não ia ler o texto e sim um numero, e nao ia conseguir armazenar ele no nome que e uma variavel de texto
    
    switch(op){ 
        case 1:
            printf("\nMontanha Russa"); //\n a mais
            break;

        case 2:
            printf("\nThe King");
            break;

        case 3:
            printf("\nKamikaze");
            break;

        case 4:
            printf("\nBooster");
            break;

        default:
            printf("\nOpcao invalida");
    }
    return 0;
}
