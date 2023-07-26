#include<iostream>
using namespace std;
//Protótipo da Função
int somar3(int num1, int num2); //declaração da função do tipo int

int resp,num1, num2; //variaveis globais
main()// serve para começar o programa
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	resp=somar3(num1,num2);// mais comum de se usar
	cout<<"\n A soma dos números é: "<<resp;
	cout<<"\n\n\n\n\n";
}//fim do main()

//====================================
//Funções 
//====================================
//Funçao somar3
int somar3(int num1, int num2)//Somar 2 num
{
	int resp;
	resp=num1+num2;
	return (resp);
}