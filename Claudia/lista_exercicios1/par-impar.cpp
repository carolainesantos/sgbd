#include <iostream>
using namespace std;

int num;

main()
{
	system("chcp 65001");
	cout<<"\n\t Par ou Ímpar...\n\n";
	cout<<"\n Digite um número: ";
	cin>>num;
	
	if (num % 2 == 0) 
		cout<<"\n N�mero �: Par";
	else 
		cout<<"\n Número é: Ímpar";
}
