/*Escolha 6 figuras.
Faça uma estrutura que mostre ao usuário quais figuras geométricas ele deseja escolher 
(pode ser escolhido uma ou mais figuras) e calcule o 
Perímetro ou Volume ou Área (observe a imagem para pedir a(s) variáveis).
Faça validações e adicione no  final adicione uma mensagem de despedida. 
tem um ex na provinha esqueleto.*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>// casas decimais
#include <conio.h>//para usar o geth
using namespace std;

int a,b,c,op;
float raio,volume,result,altura,base;
float l1,l2,l3,l4,compri,profun,resultado;

main()
{
	system("chcp 65001");
	system("cls");
	cout<<fixed<<setprecision(2);
	system("color 05");
	//cout<<"\n\t 🔺◾🔘Figuras Geométricas🔺◾🔘 ";
	
	//getch(); //serve para ler um caracter ou parar a tela
    do{
	   	system("cls");
	   	cout<<"\n\t 🔘🔺◾MENU ▪️🔺🔘 \n";
	   	cout<<"\n[1] Calcula o Volume de um Cone.\n";
		cout<<"\n[2] Calcula o Volume de um Cilindro.\n";
		cout<<"\n[3] Calcula a Área de um Retângulo.\n";
		cout<<"\n[4] Calcula o Perímetro de um Quadrado.\n";
		cout<<"\n[5] Calcula Área de um Paralelepípedo.\n";
		cout<<"\n[6] Triângulo Isósceles.\n";
		cout<<"\n[7] Digite 7 para Encerrar!\n ";
		cout<<"\n\n\n\n Escolha uma das opções do menu: ";
	    cin>>op;
	    switch (op)
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
		        system ("color 7");
		        cout<<"\n\n ♥♥ Fim do Programa ♥♥";
		        getch();
		        break;
		    }	
		}//fecha swith	
	} while(op!=7);
cout<<"\n\n\n ";
}

















