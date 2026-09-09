programa {
  funcao inicio() {
    real valorcompra
    real valorfinal

    escreva ("Valor de compra: R$ ")
    leia(valorcompra)
    valorfinal = valorcomdesconto(valorcompra)

    escreva ("Valor com desconto: ", valorfinal)
    
  }

  funcao valorcomdesconto(real valComp)
  {
    se (valComp >= 100 e valComp < 300)
    {
      retorne valComp * 0.9
    }
    senao se (valComp >= 300 e valComp < 500)
    {
      retorne valComp * 0.85
    }
    senao se(valComp >= 500)
    {
      retorne valComp * 0.8
    }
    senao
    {
      retorne valComp
    }


  }
}
