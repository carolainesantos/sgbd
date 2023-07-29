/*1.FUP que leia uma matriz 3 x 5 de números inteiros.
Calcule e imprima:
a) O maior número da matriz.
b) O menor número da matriz.
c) A soma de todos os elementos da matriz.
d) A média de todos os elementos da matriz.
e) A quantidade de números pares na matriz.
f) A quantidade de números negativos na matriz.*/

#include <iostream>

using namespace std;

int valores;
int i,j;
int const MAXLIN=3;
int const MAXCOL=5;
int mat[MAXLIN][MAXCOL];

main()
{
	cout<<"\n\t Matriz";
	// leitura 
	for(i=0;i<MAXLIN;i++) // leitura da linha da matriz 
	{ 
		for (j=0;j<MAXCOL;j++) // leitura da coluna da matriz 
		{
			cout<<"\n Digite os valores para a Matriz...";
		  	cin>>mat[i][j];		  	
		}  
	}//fecha o for
	// fim leitura
	
	//inicio escrita
		for(i=0;i<MAXLIN;i++) // leitura da linha da matriz 
	{ 
		for (j=0;j<MAXCOL;j++) // leitura da coluna da matriz 
		{
			if((i != 0) || (j != 0)) 
			{
				cout<<", ";	
			}
		  	cout<<mat[i][j];		  	
		}  
	}//fecha o for
	
	 
}







