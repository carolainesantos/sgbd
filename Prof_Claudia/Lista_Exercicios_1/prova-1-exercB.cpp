/*3ª Questão–Observe a figura 1 e escolha 4itens. 
A figura 2 é obrigatória. 
Para cada item, peça a quantidade de parcelas 
que deverão ser calculados. Exercício (B) */
#include <iostream>
#include <iomanip>
using namespace std;

double result = 7;
float denominador = 3;
int divi = 2;
int i, termos; 

main()
{
  system("chcp 65001");
  cout <<fixed<<setprecision(8);
  cout<<"\n\n\t\t >>> Série: 7 + 7/3 + 7/9 + 7/27 <<<< \n\n";
  cout<< "\n Digite a quantidade de termos: ";
  cin>>termos;
   
  for (i=2;i<=termos;i++) 
  { 
      result = result + (7/denominador);
      denominador*=3;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}