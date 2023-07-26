//FUP que leia 10 notas
//Use constante
//Calcule a média
// Faça uma função que verifique quantos alunos tiraram notas menores 
//que 7 - retorne a quantidade ao programa principal;

#include <iostream>
using namespace std;

// criar constante
int const TAM = 10;
int i,cont=0;
float media,notas[TAM];//TAM para gerenciar o tamanho do vetor

float media_vetor(float notas[],int TAM);
main()
{
  system("chcp 65001"); //para usar acentuação
  cout<<"\n\n\t\t ****  VETORES NOTAS   *** \n\n";
  cout<<"\n Informe " << TAM <<" notas";
  for (i=0;i<TAM;i++)
  { 
    cout<<"\n Informe a "<<i+1<<"ª nota: ";
	cin>> notas[i];
  } 
  media = media_vetor(notas,TAM);
  cout<<"\n A média das notas é: " <<media;
  cout<<"\n\n\n\n\n"; 
}
//=======================================================
// FUNÇÃO
float media_vetor(float notas[],int TAM)
{
 float media,acum=0;
 int i;
 for (i=0;i<TAM;i++)
  { 
   	acum = acum + notas[i];
  }
  media=acum/TAM;
  return (media);
	
}
