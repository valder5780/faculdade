programa {
  funcao inicio() {

    inteiro m[2][4]
    cadeia printbox

    inteiro resultado = 0

    //escreve a matriz
    para(inteiro rodada = 0; rodada <= 2; rodada++) //0 define matriz 1, 1 define matriz 2, 2 define matriz 3
    {
      para(inteiro linha = 0; linha < 2; linha++)
      {
        para(inteiro coluna = 0; coluna < 4; coluna++)
        {
          se(rodada == 0) //definir a matriz 
          {
            escreva("digite o numero de [", linha,"] [", coluna,"] da matriz 1\n")
            leia(m[linha][coluna])
          }
          se(rodada == 2)
          {
            resultado += m[linha][coluna]
          }
          
        }
      }
    }

    escreva("resultado: ",resultado)


  }
}
