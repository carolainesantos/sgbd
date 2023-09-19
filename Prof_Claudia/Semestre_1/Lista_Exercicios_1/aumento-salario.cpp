// Como aplicar o aumento de salário com a linguagem C++.

#include <iostream>
#include <stdlib.h> 
using namespace std;

string nome;
float salarioAtual,novoSalario,porcento,aumento;

main ()
{
	system("chcp 65001");
	cout<<"\n\t \e[36;1m Aumento de Salário...\033[0m \n";
	cout<<"\n Informe o nome do Funcionário: ";
	cin>>nome;
	cout<<"\n Olá "<<nome<<"!"<<" Informe o seu salário atual: ";
	cin>>salarioAtual;
	cout<<"\n Informe qual será a porcentagem do aumento: ";
	cin>>porcento;
	
	aumento = (porcento / 100) * salarioAtual;
	novoSalario = salarioAtual + aumento;
	
	cout<<"\n Seu salário anterior era de: R$ "<<"\e[31;1m"<<salarioAtual<<"\033[0m\n";
	cout<<"\n Após, o aumento de "<<porcento<<"%"<<" o valor recebido será de: R$ "<<"\e[32;1m"<<novoSalario<<"\033[0m!\n";
	cout<<"\n Total de aumento: R$ \e[32;1m"<<aumento<<"\033[0m";
	cout<<"\n\n";
}









