/*FUP que peça um número e imprima uma mensagem 
se esse número é positivo ou negativo.*/

#include <iostream>
using namespace std; 
int num;

main()
{
	system("chcp 65001");
	cout<<"\n\t ...Número positivo ou Negativo...\n";
	cout<<"\n Digite um número: ";
	cin>>num;

	if (num < 0) 
	{
		cout<<"\n Número negativo: "<<num;
	} 
	else if (num > 0)
	{
		cout<<"\n Número positivo: "<<num;
	}
	else if (num == 0)
	{
		cout<<"\n Você digitou Zero!";
	}
}














