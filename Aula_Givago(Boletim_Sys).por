programa {
  funcao inicio() {
    cadeia nome
    inteiro nota
    cadeia resultado
    escreva("Sistema de Boletim\n")

    escreva("Digite o nome Do aluno ")
    leia(nome)
    escreva("Digite a nota do aluno ")
    leia(nota)

    

    se
    (nota >= 60)
    {
      resultado = "Aprovado"
    }
    senao se
    (nota < 40)
    {
      resultado = "Reprovado"
    }
    senao
    {
      resultado = "de Recuperação"
    }
      
      
    escreva("--------Resultado----------\nO Aluno " + nome + " tirou " + nota + " e esta " + resultado)
    
    
    
  }
}
