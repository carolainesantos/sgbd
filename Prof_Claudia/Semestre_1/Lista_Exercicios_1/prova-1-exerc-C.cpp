/*Exercicio- C */
#include <iostream>
#include <iomanip>
using namespace std;
double result=1;
float denominador = 3;
int divi= 2;
int i, termos; 
main()
{
  system("chcp 65001");
  cout <<fixed<<setprecision(8);
  cout<<"\n\n\t\t ****  Série: 1 + 2/3 + 4/9 + 8/27  *** \n\n";
  cout<< "\n Informe a quantidade de termos: ";
  cin>>termos;
  
  for (i=2;i<=termos;i++) 
  { 
      result = result + (divi/denominador);
      divi = divi * 2;// neste caso o dividendo deve ser uma nova variável
      denominador*=3;// neste caso o denominador deve ser uma nova variável
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}