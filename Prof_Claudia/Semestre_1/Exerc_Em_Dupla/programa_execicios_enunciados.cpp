#include <iostream> //cin, cout
#include <conio.h> //usar getch
#include "funcoes_exercicios.h" //biblioteca para gerar a solução dos exercicios
#include "funcoes_verificarcin.h" //biblioteca para verificar as entradas em cin
using namespace std; //usar cin e cout

float qtdeRacao,qtdeDias;//exercicio 1
float qtdeTorneira,qtdeHoras;//exercicio 2
float horasTrab,qtdeFunc,padraoFunc,padraoQtdeFunc;//exercicio 3
float qtdeTempo,qtdeLinhas,qtdeLinhas2;//exercicio 4
float kmPorLitro,qtdeKm;//exercicio 5
int op,op2,op3;//op d switch

main()
{//chave principal programa

	
	do{ //inicio do while 
	system ("chcp 65001");
	cout<<"\n \033[31mMenu de programas:\033[0m ";
	cout<<"\n \033[36 1- Exercicios da Profª Claudia \033[0m ";
	cout<<"\n 2- Exercicios 2ª Etapa ";
	cin>>op;
	system("cls");
	switch (op)
	{//inicio swith 1
	
	case 1:{
	
	cout<<"\n\t Exercicios \n ";
	cout<<"\n 1º Exercicio: Descobrir quantidade de ração que vai gastar em uma semana \n";
	cout<<"\n 2º Exercicio: Descobrir quantas horas uma quantidade X de torneiras, leva para encher um tanque \n";
	cout<<"\n 3º Exercicio: Quantas peças os seus funcionários estão produzindo em determinadas horas \n";
	
	cin>>op2;
	system("cls");
	switch (op2)
		{//chave switch 2
		case 1:{//inicio case 1
			cout<<"\n 1º Exercicio: \n ";
			cout<<"\n Informe quanto você gasta de ração com seu cão em 15 dias? \n ";
			cin>>qtdeRacao;
			qtdeRacao = verificarNum1(qtdeRacao);
			cout<<"\n Se você gasta "<<qtdeRacao<<" em 15 dias então, ";
			respExercicio1(qtdeRacao);
			cout<<"\n\n Pressione qualquer tecla para voltar ao inicio do programa... \n";
			getch();
			break;
		       }//fim case 1 
		
		case 2:{//inicio case 2
			cout<<"\n 2º Exercicio: \n ";
			cout<<"\n - Considere que leva 6h para encher um tanque com uma torneira \n ";
			cout<<" Digite a quantidade de torneiras que você quer utilizar para encher um tanque: \n";
			cin>>qtdeTorneira;
			qtdeTorneira = verificarNum2(qtdeTorneira);
			cout<<"\n Se você gasta 6h utilizando uma torneira então, com "<<qtdeTorneira;
			respExercicio2(qtdeTorneira);
			cout<<"\n\n Pressione qualquer tecla para voltar ao inicio do programa... \n";
			getch();
			break;
			   }//fim case 2
	
		case 3:{//inicio case 3
			cout<<"\n 3º Exercicio: \n ";
			cout<<"\n - Considere que 50 funcionários fazem 200 peças a cada 5 horas.";
			cout<<"\n - Informe o número de funcionários que sua empresa tem: \n";
			cin>>qtdeFunc;
			qtdeFunc = verificarNum3(qtdeFunc);
			cout<<" Informe quantas horas os seus funcionários trabalham por dia: \n";
			cin>>horasTrab;
			horasTrab = verificarNum3Parte2(horasTrab);
			respExercicio3(qtdeFunc,horasTrab);
			cout<<"\n ";
			cout<<"\n\n Pressione qualquer tecla para voltar ao inicio do programa... \n";
			getch();
			break;
			
		      }//fim case 3
		      
		  }//fim chave switch op2
		  
	   }//fim do case 1 dentro do swith op
	   

		
		case 2:
{//inicio exercicio criado switch
		    cout<<"\n\t Exercicios 2ª Etapa\n ";
		    cout<<"\n 4º Exercicio: Descubra quanto tempo você leva para programar \n";
	        cout<<"\n 5º Exercicio: Descubra quantos litros de gasolina você vai gastar em uma viagem \n";
			cin>>op3;
			
			switch(op3){
			case 1:{//inicio case 1
			cout<<"\n 4º Exercicio (Exercicio da 2º Fase): \n ";
			cout<<"\n Informe uma quantidade de linhas: ";
			cin>>qtdeLinhas;
			qtdeLinhas = verificarNum4(qtdeLinhas);
			cout<<"\n - Quanto tempo você em média demora para codificar "<<qtdeLinhas<<" linhas de código que você tem conhecimento?";
			cin>>qtdeTempo;
			qtdeTempo = verificarNum4Parte1(qtdeTempo);
			cout<<"\n - Informe a um número para linhas e descubra quando tempo você irá aproximadamente demorar: ";
			cin>>qtdeLinhas2;
			qtdeLinhas2 = verificarNum4Parte2(qtdeLinhas2);
			respExercicio4(qtdeLinhas,qtdeLinhas2,qtdeTempo);
			cout<<"\n\n Pressione qualquer tecla para voltar ao inicio do programa... \n";
			getch();
			break;
		       }//fim case 1
		
		    case 2:{//inicio case 2
		    cout<<"\n 5º Exercicio (Exercicio da 2º Fase): \n ";
		    cout<<"\n Quantos Kilômetros o seu automóvel faz por litro de gasolina? \n ";
		    cin>>kmPorLitro;
		    kmPorLitro = verificarNum5(kmPorLitro); 
			cout<<"\n Quantos Kilômetros você vai viajar? \n ";
			cin>>qtdeKm;
			qtdeKm = verificarNum5Parte1(qtdeKm); 
			respExercicio5(kmPorLitro,qtdeKm);
			cout<<"\n\n Pressione qualquer tecla para voltar ao inicio do programa... \n";
			getch();
			break;
		}//fim case 2 dentro do exercicio 2
		
	}//fim do switch op 3
}//fim do case 2 exercicio criado
			
		}//fim chave principal switch op
			
    	
	}while(op!=3);//fim do while 
	
}//chave principal programa

