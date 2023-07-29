#include <iostream>
#include <stdio.h>

using namespace std;

float hora, result;
main()
{
	system("chcp 65001");
	cout<<"\n \t Horas para segundos \n";
	cout<<"\n Digite a hora: ";
	cin>>hora;
	 
	result = 3600 * hora; //1hora tem 3600 seg
	cout<<"\n Horas em segundos: "<<result;//conversao
}
