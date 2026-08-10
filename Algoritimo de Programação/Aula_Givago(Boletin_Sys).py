print("Boletim de notas")

nome = str (input("Nome do(a) aluno(a):"))
disciplina = str (input("Disciplina :"))
nota = float (input ("Nota obtida: "))

if nota >= 6:
    print("Aprovado!")
elif nota < 4:
    print("Reprovado!")
else:
    print("ficou de Recuperação")
