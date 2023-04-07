#include <iostream>
#include <stdio.h>

using namespace std;
int i;

main ()
{
	system("chcp 65001");
	cout<<" \n\t============================== \n";
	cout<<"\n \t Programa Números de 0 a 100 \n ";
	cout<<" \n\t==============================\n";
	
	for(i=0;i<101;i++)//repete de zero ate 100 
	{
		cout<<i<<" - ";//deixa um traço entre os num
	}
}
	
