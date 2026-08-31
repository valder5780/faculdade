programa {
  funcao inicio() {
    inteiro idade

    escreva("Quantos anos você tem? ")
    leia(idade)
  
    se(idade <= 13)
    {
      escreva("Você é uma criança")
    }
    senao se(idade <= 18)
    {
      escreva("Você é um adolescente")
    }
    senao se(idade <= 60)
    {
      escreva("Você é adulto")
    }
    senao
    {
      escreva("Você é adulto")
    }


  }
}
