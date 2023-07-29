/* FUP que verifique se a pessoa poderá ir na Igreja
sozinha (o) nas seguintes condiçõe:
Rapaz só poderá ir na Igreja sozinho se for maior
 de 18 anos.
Garota só poderá ir na Igreja sozinha se for m
 maior de 35 anos.
 
 	( Exercicio transformado em C.)
*/

#include <stdio.h> 

int main()
{
	system("chcp 65001"); 
	char sexo;
	int idade;
	
	printf("\n=====================================================\n"); 
	printf("\n\t SERÁ QUE VOCÊ PODERÁ SAIR SOZINHO(A)? \n");
	printf("\n=====================================================\n"); 
	 
	printf("\n Informe uma letra para o Sexo: ");
	scanf("%c", &sexo);
	 
	sexo = toupper (sexo); //TRANSFORMA EM MAIUSCULO
	 
	printf("\n Informe sua Idade:  ");
	scanf("%d", &idade);
	 
		if ((sexo=='M') && (idade >=18)) 
		    printf("\n Poderá ir na Igreja sozinho");
		else
		if ((sexo=='F') && (idade >=35))
		    printf("\n Poderá ir na Igreja sozinha");
		else
		   printf("\n Ai ai ai:  Vai ficar em casa!");
		
		   printf("\n\n\n");
		   
		   return 0;
	} 
