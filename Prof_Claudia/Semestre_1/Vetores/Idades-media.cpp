/* 1.Leia  um  vetor  com  10  idades.
Calcule  e  imprima:  a  média  das  idades,
a quantidade de pessoas com idade superior e inferior
à média calculada. */

#include <iostream>
using namespace std;

int somaIdades,qtdeMenor;
int const TAM = 10;
int i;
float result;
int idade[TAM];

int calcMedia(int somaIdades);
int idadeMenor(int idade[TAM], float media);
int qtdeMaiorMedia(int idade[TAM], float media);

main()
{
	system("chcp 65001");
	cout<<"\n\t 10 Idades = média, qtde com idade ";
	cout<<" superior e inferior a media!\n";
	
	for(i=0;i<TAM;i++)
	{
		cout<<"\n Digite a "<<i+1<<" ª idade: ";
		cin>>idade[i];
		somaIdades = somaIdades + idade[i]; 
	}
	float media=calcMedia(somaIdades);
	cout<<"\n A média das idades é: "<<media;
	cout<<"\n Idades menor que a média: "<<idadeMenor(idade, media);
	cout<<"\n Idades maior que a média: "<<qtdeMaiorMedia(idade, media);
}
//======Inicio Funções====================================================
//====Calcula Média das Idades=============================
int calcMedia(int somaIdades)
{
	result = somaIdades / TAM;
	return result;
}
//=========================================================
//===Calcula Quantas idades menor que a média existem======
int idadeMenor(int idade[TAM], float media)
{
	int cont=0;
	for(i=0;i<TAM;i++)
	{
		if(idade[i] < media){
			cont++;
		}
	}
	return cont;
}
//=========================================================
//===Calcula Maior Média===================================
int qtdeMaiorMedia(int idade[TAM], float media)
{
	int cont=0;
	for(i=0;i<TAM;i++)
	{
		if(idade[i] > media)
		{
			cont++;
		}
	}
	return cont;
}




