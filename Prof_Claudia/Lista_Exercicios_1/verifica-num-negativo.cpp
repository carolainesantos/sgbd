#include <iostream>
using namespace std; 

int num;

main()
{
	system("chcp 65001");
	cout<<"\n\t Positivo ou Negativo \n\n";
	cout<<"\n Digite um número: ";
	cin>>num;
	
	if (num <0) 
		{
		cout<<"\n N�mero negativo: "<<num;
		} 
		else 
		{
			cout<<"\n N�mero positivo: "<<num;
		}
	cout<<"\n\n\n";	
}
