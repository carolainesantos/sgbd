programa 
{
	funcao inicio()
	{
		inteiro cpf
		inteiro dependentes
		real rendaMensal
		real salarioMin = 1200
		real aliquota
		
		escreva("Digite seu CPf: ")
		leia(cpf)
		escreva("Dependentes: ") 
		leia(dependentes)
		escreva("Renda mensal: ")
		leia(rendaMensal)
		
		real descDependente = (rendaMensal * 0.05) * dependentes
		
		se(rendaMensal < (salarioMin * 2)){
			aliquota = 0 
		} senao se(rendaMensal <= (salarioMin * 3)){
			aliquota = rendaMensal * 0.05
		} senao se(rendaMensal <= (salarioMin * 5)){
			aliquota = rendaMensal * 0.1
		} senao se(rendaMensal <= (salarioMin * 7)){
			aliquota = rendaMensal * 0.15
		} senao {
			aliquota = rendaMensal * 0.20
		}
		
		escreva("\nO desconto de dependentes é: " + descDependente)
		real valorFinal = rendaMensal - descDependente
		escreva("\nSeu salario final é de : " + valorFinal)

	}
}
