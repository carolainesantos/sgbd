#include <iostream>
#include <stdio.h>//funçoes de entrada e saida
using namespace std; 
  
float alt,peso,pesoIdeal;
				
main()
{
	system("chcp 65001");
	cout<<"\n \t IMC \n";
	cout<<" Digite sua altura: ";
	cin>>alt;
	
	pesoIdeal = (72.7 * alt) - 58;
	cout<<"\n Seu IMC �: "<<pesoIdeal;
}

