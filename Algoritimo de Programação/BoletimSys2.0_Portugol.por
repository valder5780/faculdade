programa {
  funcao inicio() {
    cadeia nome
    cadeia curso
    inteiro semestre
    cadeia disciplina
    inteiro nota1
    inteiro nota2
    inteiro nota_final


    cadeia resultado
    escreva("Sistema de Boletim\n")

    escreva("Digite o nome do aluno: ")
    leia(nome)
    escreva("Digite o curso do aluno: ")
    leia(curso)
    escreva("Digite a disciplina para calcular a nota: ")
    leia(disciplina)
    escreva("Digite qual o respectivo semestre: ")
    leia(semestre)
    escreva("Digite a primeira nota do aluno: ")
    leia(nota1)
    escreva("Digite a segunda nota do aluno: ")
    leia(nota2)

    nota_final = (nota1 + nota2)/2
    

    se
    (nota_final >= 60)
    {
      resultado = "Aprovado"
    }
    senao se
    (nota_final < 40)
    {
      resultado = "Reprovado"
    }
    senao
    {
      resultado = "de Recuperação"
    }
      
      
    escreva("--------Resultado----------\nAluno: " + nome + "\nDisciplina cursada: " + disciplina + " " + semestre + " Semestre" + "\nNota Final da disciplina: " + nota_final + "\nSituação do aluno: " + resultado)
    
    
    
  }
}
