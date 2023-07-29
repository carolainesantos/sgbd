/* FUP que pergunte ao usuario quantos numeros ele deseja informar.
Apos verifique quantos destes numeros sao negativos.
Imprima uma mensagem na tela.*/

#include <iostream>
using namespace std; 

int i,num,qtde,totalNegativo=0,totalPositivo=0,totalPar=0,totalMult=0;

main()
{
	system("chcp 65001");
	cout<<"\n\t Quantos Números deseja informar? \n- ";
	cin>>qtde;
	
	for (i=1;i<=qtde;i++)
	{
		cout<<"\n Informe o "<<i<<" º número: ";
		cin>>num;
		if (num<0) {
			totalNegativo++; 
		} else if (num>0) {
			totalPositivo++;
		} if (num % 2 == 0) {
			totalPar++;
		} if (num %7 == 0){
			totalMult++;
		}
	}
	cout<<"\n Total Negativo: "<<totalNegativo;
	cout<<"\n Total Positivo: "<<totalPositivo;
	cout<<"\n Total Números Pares: "<<totalPar; 
	cout<<"\n Total Multiplos por 7: "<<totalMult;
}
 
 
 
 
 
 
 
 
 
 /*cout<<"\n Total Zero: "<<totalZero;*/


