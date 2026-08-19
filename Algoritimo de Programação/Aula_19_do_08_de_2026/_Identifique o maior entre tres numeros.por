programa {
  
  funcao inicio() 
  {

    real num[3]

    real rank[3]


    escreva("Digite 3 numeros\n")
    para(inteiro i = 0; i < 3; i++)
    {
      escreva(i +1, "º numero: ")
      leia(num[i])

      se(i == 1 e num[0] >= num[1])
      {
        rank[1] = num[0]
        rank[2] = num[1]
      }
      senao se(i == 1)
      {
        rank[1] = num[1]
        rank[2] = num[0]
      }
      se(i == 2 e rank[1] >= num[2])
      {
        rank[0] = rank[1]
        rank[1] = num[2]
      }
      senao se(i == 2)
      {
        rank[0] = num[2]
      }
      se(i == 2 e rank[1] < rank[2])
      {
        inteiro armz = rank[2]
        rank[2] = rank[1]
        rank[1] = armz


      }
      

    }
    escreva("----------Rank---------\n")

    para(inteiro i = 0; i < 3; i++)
    {
      escreva(i + 1 ,"º lugar do Rank: ", rank[i], "\n")

      se(i == 2 e (rank[0] == rank[1] ou rank[1] == rank[2]))
      {
        se(rank[0] == rank[1] e rank[0] != rank[2])
        {
          escreva("1º e 2º lugar do rank sao iguais\n")
        }
        se(rank[1] == rank[2] e rank[1] != rank[0])
        {
          escreva("2º e 3º lugar do rank sao iguais\n")
        }
        se(rank[0] == rank[1] e rank[1] == rank[2])
        {
          escreva("todos os numeros sao iguais")
        }

        
      }


    }

    
  }
}
