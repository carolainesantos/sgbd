/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui: Carolaine dos Santos

Data: <<versão 01 ou versão_final>> : 
(Altere a data conforme a entrega)
*/
#include <iostream>
#include <stdlib.h> //entrada e saida
#include <iomanip>//biblioteca numeros com casas decimais
#include <conio.h> // Para usar o getch();
using namespace std;

int carinha,sapato,calca,corpo;
int a,b,c,i,termos;
int op,opcase,opex1,opex2,opex3;
float raio,volume,result,altura,base;
float l1,l2,l3,l4,compri,profun,resultado;
float valor;
double resultex3case1=7,resultex3case2=1,resultex3case3=3,resultex3case4=5; 
float denominador = 3;
int divi = 2;

main()
{
	system("chcp 65001");//para usar acentos
	cout<<fixed<< setprecision(2);//deixar o float com 2 casas decimais
	system("cls"); //limpar a tela
	system("color 0b"); //usa a cor 
	cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
	cout<<"INDICADORES: \n\n";
	cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
	cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
	cout<<"3. Utiliza operações aritméticas em programas.\n";
	cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
	cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
	cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
    getch(); //serve para ler um caracter ou parar a tela
    do{
	   system("cls");
	   cout<<"\n\t  🌸🌸🌸 MENU 🌸🌸🌸 \n";
	   cout<<"\n [1] Questão 01 - << Figuras Geométricas >>";
	   cout<<"\n [2] Questão 02 - << Unidades de Medidas >>";
	   cout<<"\n [3] Questão 03 - << Series >>";
	   cout<<"\n [4] Questão 04 - << Questão Livre >>";
	   cout<<"\n [5] FIM - << Encerra o Programa >>."; 
	   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
	   cin>>op;
	   system("cls");
	   switch (op)
	   {
			case 1:{
		       	system ("color 5");
		        do{
				   	system("cls");
				   	cout<<"\n\t 🔘🔺◾MENU ▪️🔺🔘 \n";
				   	cout<<"\n[1] Calcula o Volume de um Cone.\n";
					cout<<"\n[2] Calcula o Volume de um Cilindro.\n";
					cout<<"\n[3] Calcula a Área de um Retângulo.\n";
					cout<<"\n[4] Calcula o Perímetro de um Quadrado.\n";
					cout<<"\n[5] Calcula Área de um Paralelepípedo.\n";
					cout<<"\n[6] Triângulo Isósceles.\n";
					cout<<"\n[7] Digite 7 para voltar ao menu principal!\n ";
					cout<<"\n\n\n\n Escolha uma das opções do menu: ";
				    cin>>opex1;
				    system("cls");
				    switch (opex1)
				  	{
				    	case  1:
						{
				    		system("color 09");
				    		cout<<"\n \t Volume de um Cone \n ";
				    		cout<<"\n Digite a altura do Cone: ";
							cin>>altura;
							cout<<"\n Digite o raio do Cone: ";
							cin>>raio;
							
							if ((altura <= 0) || (raio <= 0))
							{
								cout<<"\n Impossível calcular";
							}
							else 
							{
								volume = (raio * raio) * 3.14159 * altura /3;
								cout<<"\n O volume é de: "<<volume<<"\n";
							}
							getch(); //ou system("pause");
				            break;
						}
						case 2: 
						{
							system("color 05");
							cout<<"\n\t Volume de um Cilindro \n";
							cout<<"\n Digite o valor do raio: ";
							cin>>raio;	
							cout<<"\n Digite o valor da altura: ";
							cin>>altura;
							
							result = (raio * raio) * 3.14 * altura; 
							cout<<"\n O volume é de: "<<result<<"\n";
							getch();
							break;
						}
						case 3: 
						{
							system("color 05");
							cout<<"\n\t Área de um Retângulo \n";
							cout<<"\n Digite o valor da base: ";
							cin>>base;
							cout<<"\n Digite a altura: ";
							cin>>altura;
							
							result = base * altura; 
							cout<<"\n Valor da Área é: "<<result;
							getch();
							break;
						}
						case 4: 
						{
							system("color 05");
							cout<<"\n\t Perímetro de um Quadrado \n";
							cout<<"\n Digite o valor do 1 º lado: ";
							cin>>l1;
							cout<<"\n Digite o valor do 2 º lado: ";
							cin>>l2;
							cout<<"\n Digite o valor do 3 º lado: ";
							cin>>l3;
							cout<<"\n Digite o valor do 4 º lado: ";
							cin>>l4;
							
							result = l1 + l2 + l3 + l4; 
							cout<<"\n Valor da área é: "<<result;
							getch();
							break;
						}
						case 5: 
						{
							system("color 05");
							cout<<"\n\t Área de um Paralelepípedo";
							cout<<"\n Digite o comprimento: ";
							cin>>compri;
							cout<<"\n Digite altura: ";
							cin>>altura;
							cout<<"\n Digite a profundidade: ";
							cin>>profun;
							
							resultado = compri + altura + profun;
							cout<<"\n Valor é: "<<resultado;
							getch();
							break;
						}
						case 6: 
						{
							system("color 05");
							cout<<"\n\t Triângulo Isósceles ";
							cout<<"\n Digite valor do 1º lado: ";
							cin>>l1;
							cout<<"\n Digite valor do 2º lado: ";
							cin>>l2;
							cout<<"\n Digite valor do 3º lado: ";
							cin>>l3;
							
							if((a + b >= c) || (a + c >= b) || (b + c >= a)) //precisa ser maior ou igual  
			        			cout<<"\n Triângulo Isósceles";//escolher outro esse ta errado !!
			        			getch();
								break;
						}
						case 7:
						{
					        break;
					    }	
					}//fecha swith
				} while(opex1!=7);
             	break;
 			}
    		case 2:{
    			system("color 0B");
             	do{
					system("cls");
	   				cout<<"\n\t  MENU \n";
	   				cout<<"\n[1] Comprimento. \n";
	   				cout<<"\n[2] Área. \n";
	   				cout<<"\n[3] Encerra o programa 🙁\n\n";
	   				cout<<"\n\n\n\n Escolha uma das opções do menu: ";
	    			cin>>opex2;
	    			system("cls");
	    			switch (opex2)
	    			{
	    				case 1: 
						{
							system("color 0F");
							cout<<"\n\t Escolha uma opção...\n ";
							cout<<"\n Para converter de CM para M digite  (1)";
							cout<<"\n Para converter de M para KM digite  (2)";
							cout<<"\n Para converter de CM para KM digite (3)";
							cout<<"\n Para converter de KM para M digite  (4)";
							cout<<"\n Para converter de KM para CM digite (5)";
							cout<<"\n Para converter de M para CM digite  (6)";	
							cout<<"\n Para voltar ao ínicio 🔁 digite (7) ";
							cout<<"\n Para encerrar 🙁 digite (8)\n";
							cin>>opcase;
							switch(opcase)
							{
								case 1:
								{
									system("color 0D");
									cout<<"\n Digite o valor em CM: ";
									cin>>valor;
									result = valor / 100;
									cout<<"\n  "<<valor<<"CM equivalem a "<<result<<" Metros";
									break;
								}
								case 2:
								{
									system("color 0D");
									cout<<"\n Digite o valor em M: ";
									cin>>valor;
									result = valor / 1000;
									cout<<"\n"<<valor<<" M equivalem a "<<result<<" KM";
									break;
								}
								case 3:
								{
									system("color 0D");
									cout<<"\n Digite o valor em CM: ";
									cin>>valor;
									result = valor / 100000;
									cout<<"\n  "<<valor<<"CM equivalem a "<<result<<" KM";
									break;
								}
								case 4:
								{
									system("color 0D");
									cout<<"\n Digite o valor em KM: ";
									cin>>valor;
									result = valor * 1000;
									cout<<"\n "<<valor<<"KM equivalem a "<<result<<" Metros";
									break;
								}	
								case 5:
								{
									system("color 0D");
									cout<<"\n\n Digite o valor em KM: ";
									cin>>valor;
									result = valor * 100000;
									cout<<"\n "<<valor<<"KM equivalem a "<<result<<" CM";
									break;
								}
								case 6:
								{
									system("color 0D");
									cout<<"\n\n Digite o valor em M: ";
									cin>>valor;
									result = valor * 100;
									cout<<"\n"<<valor<<"M equivalem a "<<result<<" CM";
									break;
								}
								case 7:
								{
					        		system ("color 7");
					        		cout<<"\n\n Para continuar Digite 7";
					        		break;
					    		}
								case 8:
					    		{
					    			op=3;
									break;
								}
								default:{
									break;
								}
							}//fecha switch
							break; 
						}	
						case 2: 
						{
							system("color 0F");
							cout<<"\n\t Escolha uma opção...\n ";
							cout<<"\n Digite 1 para converter de CM² para M²";
							cout<<"\n Digite 2 para converter de M² para KM²";
							cout<<"\n Digite 3 para converter de CM² para KM²";
							cout<<"\n Digite 4 para converter de KM² para M²";
							cout<<"\n Digite 5 para converter de KM² para CM²";
							cout<<"\n Digite 6 para converter de M² para CM²";	
							cout<<"\n Digite 7 para voltar ao ínicio 🔁";
							cout<<"\n Digite 8 para encerrar 🙁. \n\n";
							cin>>opcase;
							switch(opcase)
							{
								case 1:
								{
									system("color 05");
									cout<<"\n\n Digite o valor em CM²: ";
									cin>>valor;
									result = valor / 10000;
									cout<<"\n"<<valor<<" CM² equivalem a "<<result<<" M²";
									break;
								}
								case 2:
								{
									system("color 05");
									cout<<"\n Digite o valor em M²: ";
									cin>>valor;
									result = valor / 1000000;
									cout<<"\n"<<valor<<" M² equivalem a "<<result<<" KM²";
									break;
								}
								case 3:
								{
									system("color 05");
									cout<<"\n Digite o valor em CM²: ";
									cin>>valor;
									result = valor / 10000000000;
									cout<<"\n  "<<valor<<" CM² equivalem a "<<result<<" KM²";
									break;
								}
								case 4:
								{
									system("color 05");
									cout<<"\n Digite o valor em KM²: ";
									cin>>valor;
									result = valor * 1000000;
									cout<<"\n "<<valor<<" KM² equivalem a "<<result<<" M²";
									break;
								}
								case 5:
								{
									system("color 05");
									cout<<"\n\n Digite o valor em KM²: ";
									cin>>valor;
									result = valor * 10000000000;
									cout<<"\n"<<valor<<" KM² equivalem a "<<result<<" CM²";
									break;
								}
								case 6:
								{
									system("color 05");
									cout<<"\n\n Digite o valor em M²: ";
									cin>>valor;
									result = valor * 10000;
									cout<<"\n"<<valor<<"M² equivalem a "<<result<<" CM²";
									break;
								}
								case 7:
								{
					        		system ("color 7");
					        		cout<<"\n\n Para continuar aperte 'Enter'";
					        		break;
					    		}
					    		case 8:
					    			{
					    				op=3;
										break;
									}
								default:
								{
									cout<<"\n Você informou uma opção inválida!";
									break;
								}
							}//fecha switch
						}	
						case 3:
						{
							break;
						}
					default: 
					{
						cout<<"\n\n\n\n Informou uma opção inválida!";
						op=0;
						getch();
					}
				}//fecha switch
			}while(op!=3);
		    break;
			}
			case 3:{
             	system ("color 0D");
             	do{
             		system("cls");
             		cout<<"\n\t MENU \n";
				   	cout<<"\n[1] Serie-B: 7 + 7/3 + 7/9 + 7/27.\n";
					cout<<"\n[2] Serie-C: 1 + 2/3 + 4/9 + 8/27.\n";
					cout<<"\n[3] Serie-F: 1 + 3/2 + 9/4 + 27/8.\n";//
					cout<<"\n[4] Serie-G: 5 + 10/3 + 20/9 + 40/27 \n";
					cout<<"\n[5] Fatorial.\n\n";
             		cin>>opex3;
             		system("cls");
             		switch(opex3)
             		{
             			case 1:
             			{
             				cout<<"\n\t >>> Serie: 7 + 7/3 + 7/9 + 7/27 <<< \n\n";
 							cout<<"\n Digite a quantidade de termos: ";
 							cin>>termos;
 	
 							for(i=2;i<=termos;i++)
 							{
 								resultex3case1 = resultex3case1 + (7/denominador);
      							denominador*=3;
	 						}
							cout<<"\n O resultado é: "<<resultex3case1;
   							cout<<"\n\n\n"; 
   							getch();
   							break;
						}
						case 2:
						{
							cout<<"\n\n\t\t >>> Série: 1 + 2/3 + 4/9 + 8/27 <<< \n\n";
							cout<< "\n Informe a quantidade de termos: ";
							cin>>termos;
  
  							for (i=2;i<=termos;i++) 
  							{ 
								resultex3case2 = resultex3case2 + (divi/denominador);
								divi = divi * 2;// neste caso o dividendo deve ser uma nova variável
								denominador*=3;// neste caso o denominador deve ser uma nova variável
							}
   							cout<<"\n O resultado é: "<<resultex3case2;
   							cout<<"\n\n\n"; 
   							getch();
							break;
						}
						case 3:
						{
							cout<<"\n\t >>> Serie: 1 + 3/2 + 9/4 + 27/8 <<< \n\n";
 							cout<<"\n Digite a quantidade de termos: ";
 							cin>>termos;
 	
						 	for(i=2;i<=termos;i++)
						 	{
						 		resultex3case3 = resultex3case3 + (3/denominador);
						 		divi*=2;
						      	denominador*=3;
							 }
							cout<<"\n O resultado é: "<<resultex3case3;
   							cout<<"\n\n\n";
   							getch();
							break; 
						}
						case 4:
						{
							cout<<"\n\t >>> Série: 5 + 10/3 + 20/9 + 40/27 <<<";
							cout<<"\n Digite a quantidade de termos: ";
							cin>>termos;
							for(i=2;i<=termos;i++)
							{
								resultex3case4 = resultex3case4 + (divi/denominador);
								divi*=2;
								denominador*=3;
							}
							cout<<"\n O resultado é: "<<resultex3case4;
							cout<<"\n\n\n";
							getch();
							break;
						}
					}
				}while(opex3!=6);
	            break;
	        }
    		case 4:{
            	system ("color 5");
             	cout<<"\n\t\t 🎨🖌️ Formando um Boneco...";
				cout<<"\n Escolhao Rosto: ";
				cout<<"\n [1] 👩";
				cout<<"\n [2] 👨";
				cout<<"\n [3] 🤗 \n";
				cin>>carinha;
				
				cout<<"\n Escolha: ";
				cout<<"\n [1] 👚";
				cout<<"\n [2] 👕";
				cout<<"\n [3] 🥼\n";
				cin>>corpo;
				
				cout<<"\n Escolha: ";
				cout<<"\n [1] 👖";
				cout<<"\n [2] 🩳";
				cout<<"\n [3] 🩲\n";
				cin>>calca;
				
				cout<<"\n Escolha: ";
				cout<<"\n [1] 👡👡";
				cout<<"\n [2] 👟👟";
				cout<<"\n [3] 🥿🥿 \n";
				cin>>sapato;
				system("cls");
				switch(carinha)
				{
					case 1: 
					{
						cout<<"\n 👩";
						break;
					}
					case 2: 
					{
						cout<<"\n 👨🏼";
						break;
					}
					case 3:
					{
						cout<<"\n 🤗 ";
						break;
					}
				}//fecha switch
				switch(corpo)
				{
					case 1: 
					{
						cout<<"\n 👚";
						break;
					}
					case 2: 
					{
						cout<<"\n 👕";
						break;
					}
					case 3:
					{
						cout<<"\n 🥼";
						break;
					}
				}//fecha switch
				switch(calca)
				{
					case 1: 
					{
						cout<<"\n 👖";
						break;
					}
					case 2: 
					{
						cout<<"\n 🩳";
						break;
					}
					case 3:
					{
						cout<<"\n 🩲";
						break;
					}
				}//fecha switch
				switch(sapato)
				{
					case 1: 
					{
						cout<<"\n👟👟";
						break;
					}
					case 2: 
					{
						cout<<"\n👟👟";
						break;
					}
					case 3:
					{
						cout<<"\n🥿🥿";
						break;
					}
				}//fecha switch
             	getch(); //ou system("pause");
            	break;
            }
        	case 5:{
		        system ("color 5");
		        getch(); //ou system("pause");
		        break;
		    }
		    case 6:{
		        system ("color 7");
		        cout<<"\n\n Vc chegou ao fim e acabou a brincadeira ♥♥";
		        getch();
		        break;
		    }
		    default: {
		        cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
		        getch();
		        break;
		    }
		}//fecha switch
	}while(op!=5);
	cout<<"\n\n\n ";
}
