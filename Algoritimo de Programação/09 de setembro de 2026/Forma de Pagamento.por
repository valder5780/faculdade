programa {
  funcao inicio() {

    inteiro opcao
    cadeia pagamento

    escreva("====OPÇÕES DE PAGAMENTO====\n")
    escreva("1 - Dinheiro\n")
    escreva("2 - Cartão de Credito\n")
    escreva("3 - Cartão de Debito\n")
    escreva("4 - PIX\n")
    escreva("5 - Boleto\n")

    escreva("Escolha a forma de pagamento: ")
    leia(opcao)
 
    pagamento = escolhapagamento (opcao)

    escreva("Forma de pagamento escolhida: ", pagamento)
    
  }
  funcao cadeia escolhapagamento(inteiro opcao)
  {
    escolha (opcao){

      caso 1:
      retorne "Dinheiro"
      caso 2:
      retorne "Cartão de Crédito"
      caso 3:
      retorne "Cartão de Débito"
      caso 4:
      retorne "PIX"
      caso 5:
      retorne "Boleto"
      caso contrario:
      retorne "Inválida"

    }
      
  }

}
