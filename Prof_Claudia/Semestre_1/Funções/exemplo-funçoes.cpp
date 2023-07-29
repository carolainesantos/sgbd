#include<iostream>
using namespace std;
//Protótipo da Função
void linha();//Funçao q não e retorna não recebe nada 


main()// serve para começar o programa
{     
	system("chcp 65001");
	linha();
	cout<<"\n Linha \n ";
	linha();

//Funções 
//====================================
//Funçao Linha 
void linha()
{
	int i;
	for(i=1;i<50;i++)
		cout<<"=";
	cout<<"\n";
}//Fim
//==================================== 











	