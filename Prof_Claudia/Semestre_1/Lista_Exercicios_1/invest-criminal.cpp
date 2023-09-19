#include <iostream>
#include <ctype.h> 
using namespace std;
char letra; 
int totalSim=0;
main()
{
	system("chcp 65001");
	cout<<"\n\t ... Investigação Criminal ...\n";
	cout<<"\n Trocou mensagem com a vítima? S ou N: ";
	cin>>letra;
	
	letra=toupper (letra);
	if (letra == 's')
		totalSim++;
		
	cout<<"\n Esteve no local do crime? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
	
	cout<<"\n É parente ou reside perto da vítima? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
		
	cout<<"\n Devia algum valor para a vítima? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
		
	cout<<"\n Trabalha ou trabalhou com a vítima? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
		
	cout<<"\n Possui algum tipo de relacionamento amoroso com a vítima? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
		
	cout<<"\n Ficou feliz pelo destino fat�dico na vítima? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
		
	cout<<"\n Possui algum tipo de arma de fogo? S ou N: ";
	cin>>letra;
	if (letra == 's')
		totalSim = totalSim + 1; 
	
	cout<<"\n Total de Sim: "<<totalSim;
	
		if (totalSim == 4){ 
			cout<<"\n Suspeito do Crime";
		}
		else 
		{
			if ((totalSim >=5) && (totalSim <=7)) {
				cout<<"\n Possível Criminoso";
			} 
		else 
			{
				if (totalSim == 8) {
					cout<<"\n Assassino";
				}
				else{ 
					cout<<"\n Inocente";
				}
			}
		} 	
}


