programa {
  funcao inicio() {

    real valorcompra
    real valorfinal
   inteiro opcao
   cadeia pagamento

    escreva("1- DINHEIRO\n")
    escreva("2- cARTAO DE CREDITO\n")
    escreva("3- CARTAO DE DEBITO\n")
    escreva("4- PIX\n")
    escreva("5- BOLETO\n")
    escreva("Digite a forma de pagamento")

    leia(opcao)

    pagamento = opcaodepagamento(opcao)

    escreva("digite o valor da compra: R$ ")
    leia(valorcompra)

    valorfinal = desconto(valorcompra)

    escreva("valor final com desconto: R$ ", valorfinal)


    
  }



  funcao cadeia opcaodepagamento(inteiro opcao)
  {

    escolha (opcao) {

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
        retorne "forma invalida"

    }



  }

  funcao real desconto (real valorcompra)
  {
    se (valorcompra >= 100 e valorcompra <= 199)
    {
      retorne valorcompra * 0.9

    }
    senao se (valorcompra >= 200 e valorcompra <= 499)
    {
      retorne valorcompra * 0.85

    }
    senao se(valorcompra >= 500 )
    {
      retorne valorcompra * 0.8

    }
    senao
    {
      retorne valorcompra
    }
  }
}
