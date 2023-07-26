#include <iostream>
#include <stdio.h>
using namespace std;

int valorA, valorB,aux;
main()
{
	system("chcp 65001");
	cout<<"\n \t A para B \n";
	cout<<"\n Digite o valor de A : ";
	cin>>valorA;
	cout<<"\n Digite o valor de B : ";
	cin>>valorB;

	cout<<"\n Valor de A: "<<valorA;
	cout<<"\n Valor de B: "<<valorB;
	
	cout<<"\n \t Inversão: ";
	aux = valorA;
	valorA = valorB;
	valorB = aux;
	
	cout<<"\n Valor de A: "<<valorA;
	cout<<"\n Valor de B: "<<valorB;
}
