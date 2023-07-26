/* Leia  um  vetor  de  caracteres.  
Pergunte  ao  usuário  qual  caractere  ele  deseja procurar no vetor. 
Pesquise e imprima a quantidade de vezes que o caractere desejado está no vetor.*/  

#include <iostream>
using namespace std;
int const TAM = 5;
char letra, caracter[TAM];
int i;


int verificaCaract(char caracter[TAM], char letra);
main()
{
	system("chcp 65001");
	cout<<"\n\t Vetor Caracter !\n";
		
	
	for(i=0;i<TAM;i++)
	{
		cout<<"\n Digite um caracter: ";
		cin>>caracter[i];
	}
	cout<<"\n Qual caractere vc deseja procurar no vetor: ";
	cin>>letra;
	cout<<"\n Quantidade que esta no vetor: "<<verificaCaract(caracter, letra);
}
//==============================================================
int verificaCaract(char caracter[TAM], char letra)//Pesquise e imprima a quantidade de vezes que o caractere desejado está no vetor.
{
	int cont=0;
	for(i=0;i<TAM;i++)
	{
		if(caracter[i] == letra )
		{
			cont++;
		}
	}
	return cont;
}