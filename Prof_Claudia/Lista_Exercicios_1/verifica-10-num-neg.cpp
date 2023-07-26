/*FUP que leia 10 numeros e verifique quantos destes numeros sao negativos.
Imprima uma mensagem na tela.*/

#include <iostream>

using namespace std; 

int const TAM = 3;
int i,num,totalNegativo=0,totNeutro=0;

main()
{
	system("chcp 65001");
	cout<<"\n\t Verifica 10 numeros, se sao Negativos...\n ";
	for (i=1;i<=TAM;i++)
	{ 
		cout<<"\n Informe o "<<i<<" numero: ";
		cin>>num;
		if (num<0) 
		{
			totalNegativo++; 
		}
		if (num==0)
		{
			totNeutro++;
		}
	}
	cout<<"\n Total Negativo: "<<totalNegativo;
	cout<<"\n Total de Zeros: "<<totNeutro;
	cout<<"\n\n\n";	
}
