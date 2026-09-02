programa {
  funcao inicio() {
    real lado1
    real lado2
    real lado3

    escreva("Digite o tamanho do lado 1: ")
    leia(lado1)

    escreva("Digite o tamanho do lado 2: ")
    leia(lado2)

    escreva("Digite o tamanho do lado 3: ")
    leia(lado3)

    se(lado1 == lado2 == lado3)
    {
      escreva("Equilátero!")
    }
    senao se(lado1 == lado2 ou lado2 == lado3 ou lado1 == lado3)
    {
      escreva("Isóceles!")
    }
    senao 
    {
      escreva("Escaleno!")
    }


    
  }
}
