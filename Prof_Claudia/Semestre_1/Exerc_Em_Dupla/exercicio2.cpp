#include<iostream>

using namespace std;
void respExercicio2();
float qtdeTorneira,qtdeHoras;

main()
{//chave principal programa
	system ("chcp 65001");
	cout<<"\n 2º Exercicio: \n ";
	cout<<"\n - Considere que leva 6h para encher um tanque com uma torneira \n ";
	cout<<" Digite a quantidade de torneiras que você quer utilizar para encher um tanque:";
	cin>>qtdeTorneira;
	cout<<"\n Se você gasta 6h utilizando uma torneira então, com "<<qtdeTorneira;
	respExercicio2();
	
}//chave principal programa
//=============================
//função exercicio 2
//=============================
void respExercicio2()
{
	float resultado2;
	float resultadoConta2;	
	resultadoConta2 = 6 * 1;
	resultado2 = resultadoConta2/qtdeTorneira;
	cout<<" torneiras você vai levar " <<resultado2<< "h.";
}