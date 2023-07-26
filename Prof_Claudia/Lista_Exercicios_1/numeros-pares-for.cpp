#include <iostream>
#include <stdio.h>
using namespace std;
int i;

main ()
{
	system("chcp 65001");
	cout<<"\n \t *** Números Pares de 0 a 100 ***\n\n ";
	for (i=0;i<=100;i++)
	{ if (i % 2 == 0) // se for imprimi o número
		cout<<"  "<<i; 
	}
	cout<<"\n\n\n\n\n ";
}
