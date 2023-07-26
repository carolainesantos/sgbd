/*3.FUP que pe�a ao usu�rio que digite um caracter e  quantidade de vezes
 que deseja que esse caracter seja impresso na tela.*/
 
#include <iostream>
using namespace std;  
char caracter;
int i,qtde;
 
main()
 {
 	system("chcp 65001");
 	cout<<"\n \t **** Caracter ****\n ";
 	cout<<"\n Digite apenas um Caracter: ";
 	cin>>caracter;
 	cout<<"\n Quantas vezes vc quer q repita esse caracter? \n";
 	cin>>qtde;
 	
 	for (i=0;i<qtde;i++) //repete e adiciona mais um conforme o usuário deseja
 	{
 		cout<<"\n"<<caracter; // Mostra na tela 
	}
 }
 
 
