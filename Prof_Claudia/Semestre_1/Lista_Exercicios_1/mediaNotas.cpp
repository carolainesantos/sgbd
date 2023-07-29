//FUP que leia 4 notas e calcule a media 

/*2- Altere o programa para calcular a média de um aluno
(passado há muitas semanas atrás), não permitindo a entrada 
de notas invalidas.*/


#include <iostream>
#include <stdio.h>
using namespace std;
int i;
float nota,acumula=0,media=0;

main()
{
	system("chcp 65001");
	cout<<"\n\n \t CALCULANDO A MÉDIA DE NOTAS \n ";
	
	for (i=1; i<=4; i++)
	{
		do
		{
			cout<<"\n\n Digite a nota da  "<<i<<" Aluno: ";
			cin>>nota;
			if ((nota<0)||(nota>10))
			{
				cout<<"\n\n ATENÇÃO NOTA ERRADA";
				cout<<"\n\n Digite a nota novamente da "<<i<<" Aluno: ";
				cin>>nota;
			}
		} while ((nota<0)||(nota>10));
			acumula=acumula + nota;
 			media=acumula/i;		
	}
	cout<<"\n A média das notas é: "<<media;
}










