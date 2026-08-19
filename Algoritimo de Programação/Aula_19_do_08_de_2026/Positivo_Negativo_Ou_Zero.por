programa {
  funcao inicio() {
    real valor
    escreva("Digite um numero para ser testado\n: ")
    leia(valor)
    
    se(valor > 0)
    {
      escreva(valor, " é positivo")
    }
    senao se(valor == 0) 
    {
      escreva(valor, " é zero")
    }
    senao
    {
      escreva(valor, " é negativo")
    }
    
  }
    
}
