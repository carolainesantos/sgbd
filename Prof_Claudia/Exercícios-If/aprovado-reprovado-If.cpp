programa
{
	funcao inicio ()
	{
		real nota1, nota2, nota3
		escreva("1ª nota: ")
		leia(nota1)
		escreva("2ª nota: ")
		leia(nota2)
		escreva("3ª nota: ")
		leia(nota3)
		
		real resultado = (nota1 + nota2 + nota3) / 3 
		escreva("Resultado: "+ resultado) 
		
		se(resultado >= 7 )
		{
			escreva(" Aprovado! ")
		}
		senao se(resultado >= 5)
		{
			escreva(" Recuperação! ")
		}
		senao
		{
			escreva(" Reprovado!!")
		}
		
		se(resultado<5)
		{
			escreva(" Reprovado!!")
		}
		senao se(resultado <7)
		{
			escreva(" Recuperação!")
		}
		senao
		{
			escreva(" Aprovado!!!")
		}
			
		
	}
}
