programa {
  funcao inicio() {
    inteiro idade
    cadeia registrado

    escreva("Quem pode votar? (Idade e registro)\n")
    leia(idade)
    leia(registrado)

    se (idade >= 16)
    {
      escreva ("\nIdade autorizada")
    }
    senao {
      escreva ("\nSem a idade minima")
    }

    se (registrado == "sim")
    {
      escreva ("\nO usuario esta autorizado pelo registro")
    }
    senao{
      escreva ("\nO usuario nao possui o registro para votar")
      

      
    }



    
  }
}
