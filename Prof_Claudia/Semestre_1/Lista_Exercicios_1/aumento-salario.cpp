//Como aplicar o aumento de salário com a linguagem C++.

#include <iostream>
#include <stdlib.h> 
using namespace std;

string nome;
float salarioAtual,novoSalario,porcento,aumento;

main ()
{
	system("chcp 65001");
	cout<<"\n\t Aumento de Salário... \n";
	cout<<"\n Informe o nome do Funcionário: ";
	cin>>nome;
	cout<<"\n Olá "<<nome<<"!"<<" Informe o seu salário atual: ";
	cin>>salarioAtual;
	cout<<"\n Informe qual será a porcentagem do aumento: ";
	cin>>porcento;
	
	aumento = (porcento / 100) * salarioAtual;
	novoSalario = salarioAtual + aumento;
	
	cout<<"\n Seu salário anterior era de R$: "<<salarioAtual<<",";
	cout<<nome<<"! Após, o aumento de "<<porcento<<"%";
	cout<<" o valor recebido será de R$: "<<novoSalario<<"!!"<<aumento;
}









