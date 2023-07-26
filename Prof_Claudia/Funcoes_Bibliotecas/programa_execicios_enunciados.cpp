#include <iostream> //cin, cout
#include <conio.h> //usar getch
#include"funcoes_exercicios.h" //biblioteca para gerar a solução dos exercicios
#include"funcoes_verificarcin.h" //biblioteca para verificar as entradas em cin
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
		cout<<"\n \e[36;5m \t Menu de programas: \n \033[0m ";
		cout<<"\n \e[38;1m 1-\033[0m Exercicios da Profª Claudia.";
		cout<<"\n \e[38;1m 2-\033[0m Exercicios 2ª Etapa. \n\n ";
		cout<<"\n \033[36m Escolha uma opção: \033[0m";
		cin>>op;
		system("cls");
	
		switch (op)
		{//inicio swith 1
			case 1:{
				cout<<"\n\t 🔗 \e[35;1m Exercicios \033[0m  🔗 \n ";
				
				cout<<"\n \e[35;1m 1º Exercicio: \033[0m Descobrir quantidade de ração que vai gastar em uma semana. \n";
				cout<<"\n \e[35;1m 2º Exercicio: \033[0m Descobrir quantas horas uma quantidade X de torneiras, leva para encher um tanque. \n";
				cout<<"\n \e[35;1m 3º Exercicio: \033[0m Quantas peças os seus funcionários estão produzindo em determinadas horas. \n";
				cout<<"\n \033[32m Escolha uma opção: \033[0m";
				cin>>op;
				system("cls");
			
				switch (op2)
				{//chave switch 2
					case 1:{//inicio case 1
						cout<<"\n \033[31;3m 1º Exercicio: \033[0m \n ";
						cout<<"\n Informe quanto você gasta de ração com seu cão em 15 dias?\n ";
						cin>>qtdeRacao;
						qtdeRacao = verificarNum1(qtdeRacao);
						cout<<"\n Se você gasta "<<qtdeRacao<<"Kg em 15 dias então, ";
						respExercicio1(qtdeRacao);
						cout<<"\n\n Pressione qualquer tecla para voltar ao menu... ";
						getch();
						break;
					}//fim case 1 
					
					case 2:{//inicio case 2
						cout<<"\n \033[31;3m 2º Exercicio: \033[0m \n ";
						cout<<"\n - Considere que leva 6h para encher um tanque com uma torneira \n ";
						cout<<" Digite a quantidade de torneiras que você quer utilizar para encher um tanque: \n";
						cin>>qtdeTorneira;
						qtdeTorneira = verificarNum2(qtdeTorneira);
						cout<<"\n Se você gasta 6h utilizando uma torneira então, com "<<qtdeTorneira;
						respExercicio2(qtdeTorneira);
						cout<<"\n\n Pressione qualquer tecla para voltar ao menu...";
						getch();
						break;
					}//fim case 2
				
					case 3:{//inicio case 3
						cout<<"\n \033[31;3m 3º Exercicio: \033[0m \n ";
						cout<<"\n - Considere que 50 funcionários fazem 200 peças a cada 5 horas.";
						cout<<"\n - Informe o número de funcionários que sua empresa tem: \n";
						cin>>qtdeFunc;
						qtdeFunc = verificarNum3(qtdeFunc);
						cout<<" Informe quantas horas os seus funcionários trabalham por dia: \n";
						cin>>horasTrab;
						horasTrab = verificarNum3Parte2(horasTrab);
						respExercicio3(qtdeFunc,horasTrab);
						cout<<"\n ";
						cout<<"\n\n Pressione qualquer tecla para voltar ao menu...";
						getch();
						break;
				    }//fim case 3 
				}//fim chave switch op2 
				break;
			}//fim do case 1 dentro do swith op
			   
				case 2:{//inicio exercicio criado switch 
					do{
						system("cls");
					    cout<<"\n\t \e[35;1m  🔗 Exercicios 2ª Etapa 🔗 \033[0m \n ";
					    cout<<"\n \e[35;1m 4º Exercicio:\033[0m Descubra quanto tempo você leva para programar. \n";
				        cout<<"\n \e[35;1m 5º Exercicio:\033[0m Descubra quantos litros de gasolina você vai gastar em uma viagem. \n";
				        
				        cout<<"\n \033[32m Escolha uma opção: \033[0m ";
						cin>>op3;
						system("cls");
						
						switch(op3)
						{	
							case 4:{//inicio case 1
							cout<<"\n \033[31;3m 4º Exercicio (Exercicio da 2º Fase): \033[0m\n ";
							cout<<"\n Informe uma quantidade de linhas: ";
							cin>>qtdeLinhas;
							qtdeLinhas = verificarNum4(qtdeLinhas);
							
							cout<<"\n - Quanto tempo você em média demora para codificar "<<qtdeLinhas<<" linhas de código que você tem conhecimento? \n";
							cin>>qtdeTempo;
							qtdeTempo = verificarNum4Parte1(qtdeTempo);
							
							cout<<"\n - Informe a quantidade de linhas para descobrir quanto tempo você demora para codar: \n";
							cin>>qtdeLinhas2;
							
							qtdeLinhas2 = verificarNum4Parte2(qtdeLinhas2);
							respExercicio4(qtdeLinhas,qtdeLinhas2,qtdeTempo);
							
							cout<<"\n\n Pressione qualquer tecla para voltar ao menu...";
							getch();
							break;
				    	}//fim case 4
				
				    	case 5:{//inicio case 2
					    cout<<"\n \033[31;3m 5º Exercicio (Exercicio da 2º Fase): \033[0m\n ";
					    
					    cout<<"\n Quantos Kilômetros o seu automóvel faz por litro de gasolina?\n\n ";
					    cin>>kmPorLitro;
					    kmPorLitro = verificarNum5(kmPorLitro); 
					    
						cout<<"\n Quantos Kilômetros você vai viajar? \n\n";
						cin>>qtdeKm;
						qtdeKm = verificarNum5Parte1(qtdeKm); 
						respExercicio5(kmPorLitro,qtdeKm);
						
						cout<<"\n\n Pressione qualquer tecla para voltar ao menu...";
						getch();
						break;
					}//fim case 2 dentro do exercicio 2
			
				}//fim do switch op 3
			}while(op3!=6);
		}//fim do case 2 exercicio criado
					
	}//fim chave principal switch op
					
	}while(op2!=3);//fim do while 
}//chave principal programa

