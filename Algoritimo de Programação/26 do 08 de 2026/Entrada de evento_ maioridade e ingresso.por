programa {
  funcao inicio() {
    inteiro idade
    cadeia ingresso

    escreva("Digite sua idade: ")
    leia(idade)
    escreva("Voce possui ingresso? (sim/nao): ")
    leia(ingresso)
    se (idade >= 18 e ingresso == "sim")
    {
      escreva("Entrada liberada")

    }
    senao
    {
      escreva("Entrada barrada")
    }

    
  }
}
