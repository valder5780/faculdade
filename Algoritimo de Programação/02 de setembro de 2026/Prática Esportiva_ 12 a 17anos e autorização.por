programa {
  funcao inicio() {
    escreva("Prática esportiva: 12 a 17 anos e autorização")

    inteiro idade
    cadeia texto
    logico autorizacao

    escreva("Digite sua idade: ")
    leia(idade)
    escreva("Voce possui autorização (sim/nao)")
    leia(texto)
    autorizacao = texto == "sim"

    se(idade >= 12 e idade <= 17 e autorizacao == verdadeiro)
    {
      escreva("Autorizado!")
    }
    senao
    {
      escreva("Não autorizado!")
    }
    
  }
}
