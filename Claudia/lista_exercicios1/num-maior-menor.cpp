/*FUP que leia dois números e 
imprima qual é o numero maior. 
  >Maior
  <Menor*/

#include <iostream>
#include <ctype.h>
using namespace std;

float num1,num2;
main()
{
	system("chcp 65001");
	cout<<"\n\t VERIFICA O NÚMERO MAIOR \n";
	cout<<"\n Digite um número : ";
	cin>>num1;
	cout<<"\n Digite mais um número : ";
	cin>>num2;
	
	if (num1>num2)
	{
		cout<<"\n O maior número é: "<<num1;
	}
	else 
		if (num2>num1)
			cout<<"\n O maior número é: "<<num2;
	
	else
		if (num2==num1)
			cout<<"\n Os números são iguais";
		
		cout<<"\n\n\n";
}
		
	
