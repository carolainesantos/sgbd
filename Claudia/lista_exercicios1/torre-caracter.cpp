/* FUP utilizando a estrutura for para imprimir a seguinte torre de caracteres: o a 10.
*
**
***
****
*****
******
*******
********
********* */ 

#include <iostream>

using namespace std;

int i,j;

main ()
{
	system("chcp 65001");
	 
	cout<<"\n\t *** Torre Bonitinha ***";
	cout<<"\n\n";
	for(i=1;i<=10;i++) // controla a linha
	{ for (j=1;j<=i;j++) // controla a coluna
		cout<<"*";
		cout<<"\n";
	}
}


