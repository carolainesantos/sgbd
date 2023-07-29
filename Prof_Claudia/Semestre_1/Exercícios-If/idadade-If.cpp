programa 
{
	funcao inicio()
	{
		inteiro anoNasc
		inteiro mesNasc
		inteiro anoAtual = 1998
		inteiro mesAtual = 5
		inteiro idade
		
		escreva("Ano de Nascimento: ")
		leia(anoNasc)
		escreva("Mês de Nascimento: ")
		leia(mesNasc) 
		
		idade = (anoAtual - anoNasc)
		
		se(mesNasc > mesAtual) {
			idade=idade-1
		}
		
		escreva("Sua idade é: " + idade)	
	}
}
