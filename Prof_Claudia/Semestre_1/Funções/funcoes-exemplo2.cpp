#include<iostream>
using namespace std;
//Protótipo da Função
int somar2();
int sub2(); //declaração da função do tipo int
int mult2();

int num1, num2; //variaveis globais
main()// serve para começar o programa
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	cout<<"\n A soma é: "<<somar2();
	cout<<"\n A subt é: "<<sub2();
	cout<<"\n A mult é: "<<mult2();
	
	cout<<"\n\n\n\n\n";
}//fim do main()

//====================================
//Funções 
//====================================
//Funçao somar2
int somar2()//Somar 2 num
{
	return (num1+num2);
}
//===================================
int sub2()//Sub 2 num
{
	return (num1-num2);
}//==================================

//Funçao mult
int mult2()
{
	return (num1*num2);
}
//======================================












