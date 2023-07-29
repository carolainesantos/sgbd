#include <iostream>
#include <stdio.h>

using namespace std;
//float para números com vírgula
int num,i;

	main ()
{
	system("chcp 65001");
	cout<<"\n\n \t Tábuada \n ";
	cout<<"\n Digite um número: ";
	cin>>num;
	for(i=0;i<=10;i++) //faz a repetiçaõ sem precisar escrever varias vezes o cout<<num<<" x 0 = "<<num * 0<<"\n";
	{
		//pula linha
		cout<<"\n"<<num<<" * " <<i<<" = " <<num * i; 
	}
}
	//Antes...
	/*cout<<"\n A tabuada do número "<<num<<" é:\n";
	cout<<num<<" x 0 = "<<num * 0<<"\n";
	cout<<num<<" x 1 = "<<num * 1<<"\n";
	cout<<num<<" x 2 = "<<num * 2<<"\n";
	cout<<num<<" x 3 = "<<num * 3<<"\n";
	cout<<num<<" x 4 = "<<num * 4<<"\n";
	cout<<num<<" x 5 = "<<num * 5<<"\n";
	cout<<num<<" x 6 = "<<num * 6<<"\n";
	cout<<num<<" x 7 = "<<num * 7<<"\n";
	cout<<num<<" x 8 = "<<num * 8<<"\n";
	cout<<num<<" x 9 = "<<num * 9<<"\n";
	cout<<num<<" x 10 = "<<num * 10<<"\n";*/

  




