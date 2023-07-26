#include <iostream>
#include "funcoesexF1.h"
#include "funcoesexF2.h"
#include "funcoesexeF3.h"
#include "funcoesexeF4.h"

using namespace std;
int valor1,num1;
int num,i,opexF1;

main()
{
	system("chcp 65001");
	cout<<"\n \e[35;1m Criado por:\033[0m 🌸 Carolaine dos Santos 🌸 \n\n";
	do{
		cout<<"\n\t \e[35;1m Funções Recursivas \033[0m \n\n"; 
		cout<<"\t Exemplo Função \e[32;1m[1]\033[0m \n";
		cout<<"\t Exemplo Função \e[32;1m[2]\033[0m \n";
		cout<<"\t Exemplo Função \e[32;1m[3]\033[0m \n";
		cout<<"\t Exemplo Função \e[32;1m[4]\033[0m \n";
		cout<<"\t Para encerrar, \e[32;1m[5]\033[0m \n\n";
		cout<<" \e[35;1m Escolha uma opção: \033[0m";
		cin>>opexF1;
		system("cls");
		
		switch(opexF1)
		{
			case 1:{
				cout<<"\n \e[35;1m \t\t Exemplo 1... \033[0m \n";
				cout<<"\n \e[32;4m //Explicação: Neste exercíco a função esta somando \033[0m";
				cout<<"\e[32;4m (+1) conforme o nº que o usuário digitar.\033[0m\n\n";
				
				cout<<"\n Informe um valor inferior a 5: ";
				cin>>valor1;
				cout<<"\n";
				increase(valor1);
				getch();
				system("cls");
				break;
			}
			case 2:{
				cout<<"\n \e[35;1m \t\t Exemplo 2... \033[0m \n";
				cout<<"\n \e[32;4m //Explicação: Neste exercício a função esta \033[0m";
				cout<<"\e[32;4m pegando os nº pares ate 50,\033[0m \n";
				cout<<"\t\t \e[32;4m e adicionando a qtde de números verificados até 50.\033[0m\n";
				
				cout<<"\n Informe um número maior que 0: ";
				cin>>valor1;
				system("cls");
				int aux = parAteCinquenta(valor1);
				cout<<"a quantidade de nºs testados é "<< aux;
				getch();
				system("cls");
				break;
			}
			case 3:{
				cout<<"\n \t\t \e[35;1m Exemplo 3...\033[0m \n";
				cout<<"\n \e[32;4m //Explicação: Neste exercício a função esta subtraindo \033[0m";
				cout<<" \e[32;4m (-1) conforme o nº que o usuário digitar.\033[0m \n\n";
				
				cout<<"\n Informe um número positivo: ";
				cin>>num1;
				cout<<"\n";
				numeroDecremento(num1);	
				getch();
				system("cls");
				break;
			}
			case 4:{
				cout<<"\n \t\t \e[35;1m Exemplo 4...\033[0m \n";
				cout<<"\n \e[32;4m //Explicação: Neste exercício a função (tabuada), pega o valor \033[0m \n";
				cout<<"\t \e[32;4m que foi digitado e atribui a tabuada daquele número.\033[0m \n\n";
				
				cout<<"\n Digite um número: ";
				cin>>num;
				tabuada(num);
				getch();
				system("cls");
				break;
			}
		}//fim do Switch.
	}while(opexF1 != 5);
}//fim da main.
//====================================================================================================
