#include <iostream>
#include <ctype.h>
using namespace std;

char letra;
main()
{
	system("chcp 65001");
	cout<<"\n\t PROGRAMA TESTE UM CARACTER E VEJA SE É VOGAL";
	cout<<"\n Digite uma letra: ";
	cin>>letra;
	letra=toupper (letra);
	
	if ((letra=='A') || (letra == 'E') || (letra=='I') || (letra=='O') || (letra=='U'))
		{ 
			cout<<"\n Você digitou uma vogal";
		}
		else
		{
			cout<<"\n Você digitou uma consoante";
		} 
}
			