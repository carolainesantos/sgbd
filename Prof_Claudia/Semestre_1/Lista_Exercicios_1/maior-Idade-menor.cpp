/*5.FUP que leia a idade de 15 pessoas. 
Após calcule e imprima:
a.) A menor idade do grupo;
b.) A maior idade do grupo;*/

#include <iostream>
using namespace std;
int const TAM=5;
int i,maior=0,menor,num=0,iguais;

main()
{
	system("chcp 65001");
	cout<<"\n\t Menor idade e Maior idade: \n\n";
	for(i=1;i<TAM;i++) 
	{
		cout<<"\n Informe a "<<i<<" idade: ";
		cin>>num;
		if ((i == 1) || (num < menor)) //se a idade for igual a 1 ou menor q menor ele entra aq
		{
			menor = num;
		}
		if(num>maior)
		{
			maior = num;
		} 
	}
	cout<<"\n\n Maior idade é: "<<maior;
	cout<<"\n Menor idade é: "<<menor;
	/*cout<<"\n Números são iguais: "<<iguais;*/
}
