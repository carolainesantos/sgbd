/*x=a²*c-b;
FUP que tenha uma função que retorne 1 se o valor da função 
for Par e retorne 0 se o valor for ímpar.
Imprima se o valor da função é Par ou Impar.*/
#include <iostream>
using namespace std; 
int a, b, c,result;
int calcularAlgo(int a, int b, int c);
main()
{	
	system("chcp 65001");
	cout<<"\n Digite um número: ";
	cin>>a;
	cout<<"\n Digite um número: ";
	cin>>b;
	cout<<"\n Digite um número: ";
	cin>>c;
	system("cls");
	
	result=calcularAlgo(a, b, c);
	
	if(result==1){
		cout<<"\n Par";
	}else 
		cout<<"\n Ímpar"; 
}
//==Inicio da Função========================================
int calcularAlgo(int a, int b, int c)
{
	int x;
	x=(a*a) * c-b;
	if(x%2==0){
		return 1;
	} else 
		return 0;	
}








