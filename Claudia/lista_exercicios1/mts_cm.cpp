#include <iostream>
#include <stdio.h>

using namespace std;

float metros;

main()
{
	system("chcp 65001");
	cout<<"\n \t Metros para Centímetros \n";
	cout<<"\n Digite o valor em metros: ";
	cin>>metros;
	 
	metros = 100 * metros; 
	cout<<"\n Valor em centímetros: "<<metros;
}
/*centimetro = 100 * centimetro;  
cout<<"\n Valor em Metros: "<<centimetro;*/