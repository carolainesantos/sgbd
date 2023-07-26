/*1- Faça o programa do slide (do - wile) (pag.3)*/

#include <iostream>
using namespace std;
int i,idade;
float acumula,media;

main()
{
	system("chcp 65001");
	cout<<"\n\t Idade pessoa \n";
	
	for (i=1; i<=3; i++)
	{
		do
		{
			cout <<"\n\n Digite a idade da  "<<i<<" Pessoa: ";
			cin >> idade;
			if ((idade<0)||(idade>145)) // se apenas uma condiçaõ for vdd ele entra aq
			{
				cout << "\n\n ATENÇÃO IDADE ERRADA";
				cout << "\n\n Digite a idade novamente da "<<i<<" Pessoa: ";
				cin >>idade;
			}
		} while ((idade<0) || (idade>145));
		acumula=acumula + idade;//primeiro soma 
 		media=acumula/i;//depois divide 
	}
	cout<<"\n A média das idades é: "<<media;
}


		
