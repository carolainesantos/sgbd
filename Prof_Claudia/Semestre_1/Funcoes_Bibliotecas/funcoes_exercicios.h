#include<iostream>
using namespace std;

//=============================
//funçoês dos exercicios
//=============================

//=============================
//função exercicio 1
//=============================
float respExercicio1(float qtdeRacao)
{
	float resultado1;
	float resultadoConta1;	
	resultadoConta1 = 7 * qtdeRacao;
	resultado1 = resultadoConta1/15;
	cout<<" assim a quantidade de ração consumida por semana é de aproximadamente " <<resultado1<< " kg.";
	return(qtdeRacao);
}

//=============================
//função exercicio 2
//=============================
float respExercicio2(float qtdeTorneira)
{
	
	float resultado2;
	float resultadoConta2;	
	resultadoConta2 = 6 * 1;
	resultado2 = resultadoConta2/qtdeTorneira;
	cout<<" torneiras você vai levar " <<resultado2<< "h.";
	return(qtdeTorneira);
}

//=============================
//função exercicio 3
//=============================
float respExercicio3(float qtdeFunc,float horasTrab)
{
	
	float resultado3;
	float resultadoConta3;	
	float padraoQtdeFunc;
	padraoQtdeFunc = qtdeFunc * horasTrab;//se torna o 25x8 ou o valor que você informar
	resultadoConta3 = 200 * padraoQtdeFunc;//200 é o padrao peças informadas
	resultado3 = resultadoConta3/250; //250 é o quantidade de funcionários(50) vezes a quantidade de horas(5) informada no exercicio
	cout<<" Se "<<qtdeFunc<<" trabalharem por "<<horasTrab<<" horas seram produzidas "<<resultado3<<" peças. ";
	return(qtdeFunc,horasTrab);
	
}
//=============================
//função exercicio 4
//=============================

float respExercicio4(float qtdeLinhas,float qtdeLinhas2,float qtdeTempo)//inicio exercicio criado
{//inicio exercicio criado
    
	float resultado4 = 0;
	float exercicio4Resultado1 = 0;
	exercicio4Resultado1 = qtdeLinhas2*qtdeTempo;
	resultado4 = exercicio4Resultado1/qtdeLinhas;
	cout<<"\n Você vai demorar o tempo de "<<resultado4<<" minutos, para programar "<<qtdeLinhas2<<" linhas de código. ";
	return (qtdeLinhas,qtdeLinhas2);
}//fim exercicio criado

//=============================
//função exercicio 5
//=============================

float respExercicio5(float kmPorLitro,float qtdeKm)//inicio exercicio criado
{//inicio exercicio criado
    float qtdeGasolina = 0;
	float exercicio5Resultado1;
	exercicio5Resultado1 = qtdeKm*1;
	qtdeGasolina = exercicio5Resultado1/kmPorLitro;
	cout<<"\n Para rodar "<<qtdeKm<<" Kilômetros, você vai precisar de aproximente "<<qtdeGasolina<<"L de gasolina. ";
	return (kmPorLitro,qtdeKm);
}//fim exercicio criado
