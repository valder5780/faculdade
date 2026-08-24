programa {
  funcao inicio() {
    inteiro idade
    cadeia nome
    cadeia cnh
    cadeia cnh_regular

    
    escreva("Qual seu nome?\n")
    leia(nome)
    escreva("Qual a sua idade?\n")
    leia(idade)
    escreva("você tem a CNH\n")
    leia(cnh)
    escreva("ela esta regular? (nao esta vencida ou com algum problema?) \n")
    leia(cnh_regular)

    se(idade >= 18 e cnh == "sim" e cnh_regular == "sim")
    {
      escreva (nome + " voce pode dirigir")
    }
    senao{
      escreva("Voce nao pode dirigir ")
    }
    
    
    
  }
}
