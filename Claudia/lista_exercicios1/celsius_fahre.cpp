#include <iostream>
#include <stdio.h>
using namespace std;

float celsius, result,fahre;

main()
{
	system("chcp 65001");
	cout<<"\n \t Celsius para Fahrenheit \n";
	cout<<"\n Digite o valor em Celsius: ";
	cin>>celsius;
	 
	result = (9 * celsius + 160) / 5; //formula para transformar em Fahre
	cout<<"\n Graus em Fahrenheit: "<<result;
	
	if (result < 0)  //menor q zero
	{
		cout<<"\n Temperatura Negativa"<<result;
	}
	else
	{
		if ((result >=10) && (result <=38))//entre 10 e 38 
		{
			cout<<"\n Temperatura entre 10 e 38 graus";
		}
		else 
		{
			if (result > 38)//maior q 38
			{
				cout<<"\n Temperatura maoir que 38 graus";
			}	
		}
	}
}






