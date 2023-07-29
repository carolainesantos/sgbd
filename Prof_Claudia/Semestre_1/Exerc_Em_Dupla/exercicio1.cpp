#include<iostream>

using namespace std;
void respExercicio1();
float qtdeRacao,qtdeDias;

main()
{//chave principal programa
	system ("chcp 65001");
	cout<<"\n 1º Exercicio: \n ";
	cout<<"\n Informe quanto você gasta de ração com seu cão em 15 dias? \n ";
	cin>>qtdeRacao;
	cout<<"\n Se você gasta "<<qtdeRacao<<" em 15 dias então, ";
	respExercicio1();
	
}//chave principal programa
//=============================
//função exercicio 1
//=============================
void respExercicio1()
{
	float resultado1;
	float resultadoConta1;	
	resultadoConta1 = 7 * qtdeRacao;
	resultado1 = resultadoConta1/15;
	cout<<" assim a quantidade de ração consumida por semana é de aproximadamente " <<resultado1<< " kg.";
}
	
	
    	

	 
	