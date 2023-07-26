/*4.FUP que calcule a soma de todos os números ímpares que são múltiplos de cinco
e que se encontram no conjunto dos números de 1 até 1000.*/

#include <iostream>
using namespace std;

int i;
main()
{
	system("chcp 65001");
	cout<<"\n\t==============================================================\n";
	cout<<"\n\t Aqui são números ímpares que são múltiplos de 5 de 1 até 1000 \n";
	cout<<"\n\t==============================================================\n\n";
	
	for(i=1;i<1000;i+=2) //repete de 1 ate 1000 somando mais 2 para ver os ímpares
	{
		if(i % 5 == 0)
			cout<<i<<" ";//deixa um espaço entre eles
	}	
}

