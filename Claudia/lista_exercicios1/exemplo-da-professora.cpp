//FUP que calcule a série:
// S = 1+1/3+ 1/9 + 1/27 - item A

#include <iostream>
#include <iomanip>
using namespace std;

double result=1;// começa com um pq a fórmula começa com 1, olhe 1 + .....
float denominador = 3;// denominador controla as potências de 3: 3 - 9 - 27 - 81 - 243
int divi= 2;
int i, termos; 
main()
{
  system("chcp 65001");// para usar acentos
  cout << fixed << setprecision(8);// para que as casas decimais ser mais exatas
  cout<<"\n\n\t\t ****  Série: 1 + 1/3 + 1/9 + 1/27    *** \n\n";
  cout<< "\n Informe a quantidade de termos ";
  cin>>termos;//termos é a quantidade de cálculos que será feita
  
  // o i começa com 2 pq o result começa com 1  
  
  for (i=2;i<=termos;i++) 
  { 
      result = result + (1/denominador);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}