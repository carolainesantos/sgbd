#include <conio.h>
#include <iomanip>
#include "CalcSeries.h"
using namespace std;

int i, termos;
int setprecision=8;
int op;
float calcTermos(float termos);
float calcTermos2(float termos);
float calcTermos3(float termos);
float calcTermos4(float termos);
main()
{
  system("chcp 65001");// para usar acentos
  do{
    cout<<"\n\n\t\t Série: 1 + 1/3 + 1/9 + 1/27 = [1]";
    cout<<"\n\n\t\t Série: 7 + 7/3 + 7/9 + 7/27 = [2]";
    cout<<"\n\n\t\t Série: 1 + 2/3 + 4/9 + 8/27 = [3]";
    cout<<"\n\n\t\t Série: 1 - 2/3 + 4/9 - 8/27 = [4]";
    cout<<"\n\n\t\t Para encerrar digite [5]\n\n";
    cin>>op;
    system("cls");
    
    switch(op){
    	
    	case 1:{
    		cout<<"\n \e[35;1m \t\t Exercicio 1... \033[0m \n";
    		cout<< "\n Informe a quantidade de termos: \n";
			cin>>termos;
			cout<<calcTermos(termos);
			getch();
			break;
			
		}
		case 2:{
			cout<<"\n \e[35;1m \t\t Exercicio 2... \033[0m \n";
    		cout<< "\n Informe a quantidade de termos: \n";
  			cin>>termos;
  			cout<<calcTermos2(termos);
  			getch();
			break;
		
		}
		case 3:{
			cout<<"\n \e[35;1m \t\t Exercicio 3... \033[0m \n";
    		cout<<"\n Informe a quantidade de termos: \n";
  			cin>>termos;
  			cout<<calcTermos3(termos);
  			getch();
			break;
		}
		case 4:{
			cout<<"\n \e[35;1m \t\t Exercicio 4... \033[0m \n";
			cout<< "\n Informe a quantidade de termos ";
  			cin>>termos;
			cout<<calcTermos4(termos);
			getch();
			break;
		}
	}//fecha swicth
  }while(op!=5); 
 
}










