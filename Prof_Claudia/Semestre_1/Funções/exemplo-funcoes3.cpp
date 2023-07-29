#include<iostream>
using namespace std;
//Protótipo da Função
//modo mais comum 
int somar3(int num1, int num2); //declaração da função do tipo int

int resp,num1, num2, num3,num4; //variaveis globais
main()// serve para começar o programa
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	cout<<"\n Informe outro número: \n";
	cin>>num3;
	cout<<"\n Informe outro número: \n";
	cin>>num4;
	cout<<"\n A soma dos números é: "<<somar3(num3,num4);
	cout<<"\n\n\n\n\n";
}//fim do main()
//====================================
//Funções 
//====================================
//Funçao somar3
int somar3(int num1, int num2)//Somar 2 num
{
	return (num1+num2);
}