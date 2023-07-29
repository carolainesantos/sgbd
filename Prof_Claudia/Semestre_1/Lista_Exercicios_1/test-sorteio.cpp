#include <iostream>
#include <cstdlib>

using namespace std;

int num,i=1;

main()
{
	system("chcp 65001");
	system("color 09");
	cout<<"\n\t 🎲🍀 Tente a Sorte 🍀🎲\n";
	
	do{
		cout<<"\n Tente adivinhar um número entre 1 a 100 \n\n";
		cout<<"Digite um número entre 1 a 100: ";
		cin>>num;
		system("cls");
		if(num < 85)
		{
			cout<<"\n\n\n Número é menor que o esperado...";
		}
		else {
			cout<<"\n\n\n Número é maior que o esperado...";
		}
	} while(num != 85); //Enquanto for vdd ele repete  
	system("cls");
	system("color 06");
	cout<<"\n\n\n Parabéns, você acertou !!";
}
