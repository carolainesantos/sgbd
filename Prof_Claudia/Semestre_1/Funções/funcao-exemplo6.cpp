#include<iostream>
using namespace std;
//Protótipo da Função
//nao é uma boa pratica

int somar4(int num1, int num2); //funçao inline
{
	int resp;
	resp=num1+num2;
	return (resp);
}

int resposta,num1,num2;
main()// serve para começar o programa
{     
	system("chcp 65001");
	cout<<"\n Informe um número: \n";
	cin>>num1;
	cout<<"\n Informe outro número: \n";
	cin>>num2;
	
	cout<<"\n A soma dos números é: "<<somar3(num3,num4);
	cout<<"\n\n\n\n\n";
}//fim do main()

