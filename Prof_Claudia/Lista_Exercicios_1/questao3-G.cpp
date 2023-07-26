/*3ª Questão – Observe a figura 1 e escolha 4 itens. 
A figura 2 é obrigatória. 
Para cada item, peça a quantidade de parcelas 
que deverão ser calculados. Exercício (G) */
#include <iostream>
#include <iomanip>
using namespace std;

int i, termos, divi = 2;
double result = 5;
float denominador = 3;

main()
{
	system("chcp 65001");
	system("cls");
	cout<<"\n\t >>> Série: 5 + 10/3 + 20/9 + 40/27 <<<";
	cout<<"\n Digite a quantidade de termos: ";
	cin>>termos;
	
	for(i=2;i<=termos;i++)
	{
		result = result + (divi/denominador);
		divi*=2;
		denominador*=3;
	}
	cout<<"\n O resultado é: "<<result;
	cout<<"\n\n\n";
}
