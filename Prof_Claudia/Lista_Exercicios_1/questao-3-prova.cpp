/*3ª Questão –Observe a figura 1 e escolha 4 itens. 
A figura 2 é obrigatória. 
Para cada item, peça a quantidade de parcelas 
que deverão ser calculados. 
Exercício (F) */
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int divi = 2;
int i, termos;
float denominador = 3;
double result = 1;
 
main()
{
	system("chcp 65001");
 	system("cls");
 	cout<<fixed<<setprecision(8);
 	cout<<"\n\t >>> Serie: 1 + 3/2 + 9/4 + 27/8 <<< \n\n";
 	cout<<"\n Digite a quantidade de termos: ";
 	cin>>termos;
 	
 	for(i=2;i<=termos;i++)
 	{
 		result = result + (3/denominador);
 		divi*=2;
      	denominador*=3;
	 }
		cout<<"\n O resultado é: "<<result;
   		cout<<"\n\n\n\n\n"; 
}
