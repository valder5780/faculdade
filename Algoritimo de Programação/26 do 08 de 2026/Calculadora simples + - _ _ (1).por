programa {
  funcao inicio() {
    inteiro na
    inteiro nb
    cadeia sinal

    escreva("Digite o primeiro numero: ")    
    leia(na)
    escreva("Digiteo segundo nnumero: ")
    leia(nb)
    escreva("Escolha a operação (+ - * / ): ")
    leia(sinal)
    se(sinal == "+")
    {
      escreva(na + nb)
    }
    senao se(sinal == "-")
    {
      escreva(na - nb)
    }
    senao se(sinal == "*")
    {
      escreva(na * nb)
    }
    senao se(sinal == "/" )
    {
      se(nb == 0)
      {
        escreva("Exceção, Divisao por zero")
      }
      senao
      {
        escreva(na / nb)
      }
      
    }
    senao
    {
      escreva("Operador invalido")
    }

    
  }
}
