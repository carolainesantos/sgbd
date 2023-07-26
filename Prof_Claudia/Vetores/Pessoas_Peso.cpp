/* solicite quantas pessoa há em uma sala, 
depois crie um array que armazene o peso de todas as pessoas. 
Peça o peso de cada uma delas, e por fim, imprima todos os pesos digitados anteriormente, 
junto com a média dos pesos.*/

#include <iostream>
using namespace std;// para usar cout e cin 

int i,qtdePessoas;
int somaPesos;
float media;

main()
{
	system("chcp 65001");
	cout<<"\n Digite quantas pessoas há na sala: ";
	cin>>qtdePessoas;
	
	int pesoPessoas[qtdePessoas];
	for(i=0;i<qtdePessoas;i++)
	{
		cout<<"\n Digite o peso: ";
		cin>>pesoPessoas[i];
		somaPesos = pesoPessoas[i] + somaPesos;
		
	}
	for(i=0;i<qtdePessoas;i++)
	{
		cout<<pesoPessoas[i]<<", ";
	}
	media = somaPesos / qtdePessoas;
	cout<<"\n Média é: "<<media;
}

