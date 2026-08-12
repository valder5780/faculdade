print("BOLETIM DE NOTAS")
nome = input("Nome do(a) aluno(a): ")
curso = input("Curso: ")
semestre = input("Semestre: ")
disciplina = input("Disciplina: ")
nota1 = float (input ("Nota 1: "))
nota2 = float (input ("Nota 2: "))
media = (nota1 + nota2)/2

if media > 100:
    print("Erro: A media ultrapassou o limite(100)")
else:
    if media >= 60:
        print("o aluno esta aprovado")
    elif media >= 20 and media < 60:
        print("o aluno esta de recuperação")
    else:
        print("o aluno esta reprovado")
