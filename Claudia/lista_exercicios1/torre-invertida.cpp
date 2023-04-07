#include <iostream>

using namespace std;

int i,j;

main ()
{
	system("chcp 65001");
	 
	cout<<"\n\t *** Torre Invertida ***";
	cout<<"\n\n";
	for(i=10;i>=1;i--) // controla a linha
	{
		for (j=1;j<=i;j++) // controla a coluna
			cout<<"*";
		
		cout<<"\n";
	}
}
