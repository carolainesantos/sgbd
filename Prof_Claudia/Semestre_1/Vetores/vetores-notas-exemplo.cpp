//FUP que leia 10 notas
// Use constante
// Calcule a média
//Verifique quantos alunos tiraram notas menores q 7
#include <iostream>
using namespace std;
// criar constante
int i,cont=0;
int const TAM = 5;
float notas[TAM];//TAM constante para gerenciar o tamanho do vetor
float media=0, acum_notas=0;

main()
{
  system("chcp 65001"); //para usar acentuação
  cout<<"\n\n\t\t ****  VETORES NOTAS   *** \n\n";
  cout<<"\n Informe " <<TAM<<" notas";
  	for (i=0;i<=TAM;i++)
  	{ 
    cout<<"\n Informe a "<<i+1<<"ª nota: ";
    cin>> notas[i];
    	if(notas[i] < 7)
  		{
  			cont++;
	    }	
		acum_notas = acum_notas + notas[i];
	}
	media = acum_notas / TAM; 
  	cout<<"\n A média das notas é: "<<media;
  	cout<<"\n Foram informadas: "<<cont<<" menores que 7";
  	cout<<"\n\n\n\n\n"; 
}







