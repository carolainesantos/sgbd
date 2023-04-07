/*Escolha 2 unidades de medidas. 
Faça uma estrutura que mostre ao usuário quais 
unidades de medidas ele pode escolher 
(pode ser escolhido uma ou as duas). 
Após, o usuário  poderá escolher o que deseja converter
(sempre  entre  a mesma escala – ou se for o caso sair de uma escala e ir para a outra).
Use sua criatividade para ofertar as conversões ao usuário. 
Faça validações.*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std; 
int op,opcase;
float valor,result;
main()
{
	system("chcp 65001");
	system("cls");
	cout<<fixed<<setprecision(2);
	system("color 0B");
	cout<<"\n\t ****Unidades de Medidas**** ";
	getch();
	do{
		system("color 0B");
		system("cls");
	   	cout<<"\n\t 🌸🌸🌸 MENU 🌸🌸🌸\n";
	   	cout<<"\n[1] Comprimento. \n";
	   	cout<<"\n[2] Área. \n";
	   	cout<<"\n[3] Encerra o programa 🙁\n\n";
	   	cout<<"\n\n\n\n Escolha uma das opções do menu: ";
	    cin>>op;
	    system("cls");
	    switch (op)
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
		        		cout<<"\n\n Para continuar aperte 'Enter'";
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
				}
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
}









