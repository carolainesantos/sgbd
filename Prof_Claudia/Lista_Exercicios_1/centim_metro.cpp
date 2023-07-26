#include <iostream>
#include <stdio.h>
using namespace std;
float centimetro;

main()
{
	system("chcp 65001");
	cout<<"\n \t Centímetros para Metros \n";
	cout<<"\n Digite o valor em centímetros: ";
	cin>>centimetro;
	 
	centimetro = 100 * centimetro; // Converte para Metros, 1Metro=100cent
	cout<<"\n Valor em Metros: "<<centimetro;
}
/*metros = 100 * metros; 
cout<<"\n Valor em centímetros: "<<metros;*/