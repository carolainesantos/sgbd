#include <iostream>
using namespace std;
int i,j;

main ()
{
	system("chcp 65001");
	cout<<"\n\t *** Quadrado Vazio ***";
	cout<<"\n";
	
	for(i=1;i<=4;i++) //linha
	{
		cout<<"\n         *";
		for(j=1;j<=8;j++) //coluna
		{ 
			if ((i==3) || (i==2)) {
				cout<<" ";
			}
			else {
				cout<<"*";
			}			
		}
		cout<<"*";	
	} 	
}

/*cout<<"\n";*/
