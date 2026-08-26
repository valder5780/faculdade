programa {
  funcao inicio() {
    cadeia cadastro_senha
    cadeia login_senha
    logico autenticacao = falso
    escreva ("Cadastre sua senha: ")
    leia(cadastro_senha)

    escreva("Login: ")
    leia(login_senha)

    se(cadastro_senha == login_senha)
    {
      autenticacao = verdadeiro
      escreva("Usuario autorizado!")

    }
    senao
    {

      escreva("Usuario Invalido!")
    }
    
  }
}
