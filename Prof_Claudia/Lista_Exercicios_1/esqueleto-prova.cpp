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

int op;
int i,nota;
float acumula,media;
float horas, result,valor;
int const TAM =10;
int num,totalNegativo=0;
int valorA, valorB,aux;
float metros;

main()
{
	system("chcp 65001");// para usar acentos
	cout <<fixed << setprecision(2); // deixar o float com 2 casas decimais
	system ("cls"); // limpar a tela
	system ("color 0b"); // usa a cor 
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
	   system ("cls");
	   cout<<"\n\t  🌸🌸🌸 MENU 🌸🌸🌸 \n";
	   cout<<"\n [1] Questão 01 - << Calculando Média de Notas >>";
	   cout<<"\n [2] Questão 02 - << Salario Trabalhador >>";
	   cout<<"\n [3] Questão 03 - << Verifica Números se são Negativos >>";
	   cout<<"\n [4] Questão 04 - << Inverte Valor >>";
	   cout<<"\n [5] Questão 05 - << Metros para Centímetros >>";
	   cout<<"\n [6] FIM <<Bônus >>.";
	   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
	   cin>>op;
	   switch (op)
	   {
		    case  1:{
		       	system ("color 5");
		        cout<<"\n\n \t CALCULANDO A MÉDIA DE NOTAS \n ";
				for (i=1; i<=4; i++)
				{
					do
					{
						cout <<"\n\n Digite a nota da  "<<i<<" Aluno: ";
						cin >>nota;
						if (nota<0)
						{
							cout << "\n\n ATENÇÃO NOTA ERRADA";
							cout << "\n\n Digite a nota novamente da "<<i<<" Aluno: ";
							cin >>nota;
						}
					} while (nota<0); 
					acumula=acumula + nota;
 					media=acumula/i;		
				}
				cout<<"\n A média das notas é: "<<media;
            	getch(); // espera digitar algo
            	break;
 			}
    		case 2:{
            	system ("color 5");
             	cout<<"\n \t Salário \n";
    			cout<<("\n Digite a quantidade de horas: ");
    			cin>>horas;
    			cout<<"\n Digite o valor por hora: ";
    			cin>>valor;
    
    			result = horas * valor; 
    
    			cout<<"\n Vc irá receber: "<<result;
    			getch(); //ou system("pause");
             	break;
			}
			case 3:{
             	system ("color 5");
             	cout<<"\n\t Verifica 10 Números, se são Negativos...\n ";
				for (i=1;i<=TAM;i++)
				{ 
					cout<<"\n Informe o "<<i<<" º numero: ";
					cin>>num;
					if (num<0)
					{
						totalNegativo++; 
					}
				}
				cout<<"\n Total Negativo: "<<totalNegativo;
				cout<<"\n\n\n";
	            getch(); //ou system("pause");
	            break;
	        }
    		case 4:{
            	system ("color 5");
             	cout<<"\n \t A para B \n";
				cout<<"\n Digite o valor de A : ";
				cin>>valorA;
				cout<<"\n Digite o valor de B : ";
				cin>>valorB;
			
				cout<<"\n Valor de A: "<<valorA;
				cout<<"\n Valor de B: "<<valorB;
				
				cout<<"\n \t Inversão: ";
				aux = valorA;
				valorA = valorB;
				valorB = aux;
				
				cout<<"\n Valor de A: "<<valorA;
				cout<<"\n Valor de B: "<<valorB;
             	getch(); //ou system("pause");
            	break;
            }
		    case 5:{
		        system ("color 5");
		        cout<<"\n \t Metros para Centímetros \n";
				cout<<"\n Digite o valor em metros: ";
				cin>>metros;
			 
				metros = 100 * metros;
				cout<<"\n Valor em centímetros: "<<metros;
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
 		}// fecha o SWITCH
	} while(op!=6);
cout<<"\n\n\n ";
}
