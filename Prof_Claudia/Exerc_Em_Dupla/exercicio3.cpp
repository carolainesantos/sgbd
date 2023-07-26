#include<iostream>

using namespace std;
void respExercicio3();
float horasTrab,qtdeFunc,padraoFunc,padraoQtdeFunc;

main()
{//chave principal programa
	system ("chcp 65001");
	cout<<"\n 3º Exercicio: \n ";
	cout<<"\n - Considere que 50 funcionários fazem 200 peças a cada 5 horas.";
	cout<<"\n - Informe o número de funcionários que sua empresa tem: \n";
	cin>>qtdeFunc;
	cout<<" Informe quantas horas os seus funcionários trabalham por dia: \n";
	cin>>horasTrab;
	cout<<"\n ";
	respExercicio3();
	
}//chave principal programa
//=============================
//função exercicio 1
//=============================
void respExercicio3()
{
	float resultado3;
	float resultadoConta3;	
	float padraoQtdeFunc;
	padraoQtdeFunc = qtdeFunc * horasTrab;//se torna o 25x8 ou o valor que você informar
	resultadoConta3 = 200 * padraoQtdeFunc;//200 é o padrao peças informadas
	resultado3 = resultadoConta3/250; //250 é o quantidade de funcionários(50) vezes a quantidade de horas(5) informada no exercicio
	cout<<" Se "<<qtdeFunc<<" trabalharem por "<<horasTrab<<"horas seram produzidas "<<resultado3<<" peças. ";
}