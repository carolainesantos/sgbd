
/* Tabuada usando Função */
#include <iostream>
#include <stdio.h>

using namespace std;

void tabuada (int num);
int num,i;
main ()
{
	system("chcp 65001");
	cout<<"\n\n \t Tábuada \n ";
	cout<<"\n Digite um número: ";
	cin>>num;
	tabuada(num);
}//==========================================================

void tabuada(int num) 
{
	for(i=0;i<=10;i++)
 	cout<<"\n"<<num<<" * " <<i<<" = " <<num * i; 
 }//Fim