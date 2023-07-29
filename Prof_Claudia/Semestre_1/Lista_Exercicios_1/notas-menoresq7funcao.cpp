//FUP que leia 10 notas num vetor
// Use constante
// Calcule a média numa função e retorne p/prog principal
// Faça uma função que verifique quantos alunos 
//tiraram notas menores que 7 - retorne a 
//quantidade ao programa principal;

#include <iostream>
using namespace std;

// criar constante
int const TAM = 10;//TAM para gerenciar o tamanho do vetor
float media,notas[TAM];
int qtde_menor_7;

int verificarQtdeVetor(float notas[],int TAM);//conta qts notas são menores que 7
float mediaVetor(float notas[],int TAM); //calcula a média
float verificarMenorNota(float notas[],int TAM);
float verificarMaiorNota(float notas[],int TAM);
float verificaNota(float nota);   
main()
{
  system("chcp 65001"); //para usar acentuação
  cout<<"\n\n\t\t ****  VETORES NOTAS   *** \n\n";
  cout<<"\n Informe " << TAM <<" notas";
  for (int i=0;i<TAM;i++)
  { 
    cout<<"\n Informe a "<<i+1<<"ª nota: ";
	cin >> notas[i];
	notas[i] = verificaNota(notas[i]);
  }
  media = mediaVetor(notas,TAM);
  qtde_menor_7 = verificarQtdeVetor(notas,TAM); 
  cout<<"\n A média das notas é: " <<media;
  cout<<"\n A qtde de notas menores que 7: "<<qtde_menor_7; 
  cout<<"\n A maior nota é: "<<verificarMaiorNota(notas,TAM); 
  cout<<"\n A menor nota é: "<<verificarMenorNota(notas,TAM);
  
  cout<<"\n\n\n\n\n"; 
}
//=======================================================
// FUNÇÃO MÉDIA
float mediaVetor(float notas[],int TAM) 
{
 	float media,acum=0;
 	for (int i=0;i<TAM;i++)
  	{ 
   		acum = acum + notas[i];
  	}
  media=acum/TAM;
  return (media);//retorna a média calculada
}
//=============================================
//FUNÇÃO QTDE NOTAS MENORES QUE SETE
int verificarQtdeVetor(float notas[],int TAM)
{ int cont_menor_7=0;
	for(int i=0;i<TAM; i++)
	 {
	 	if (notas[i]<7)
	 	   cont_menor_7++;//conta notas menores de 7
	 }
  return (cont_menor_7);	 
}
//============================================
//FUNÇÃO MAIOR NOTA VETOR
//=============================================
float verificarMenorNota(float notas[],int TAM)
{
	float menor;
	for (int i=0;i<TAM;i++)
	{
	  if (i==0)// será executado uma vez só	
	     menor = notas[i];//menor será inicializado com a 1ª nota do vetor
	  if (notas[i]<menor) 
	      menor = notas[i];
	}
	return (menor);
}

//============================================
//FUNÇÃO MAIOR NOTA VETOR
//=============================================
float verificarMaiorNota(float notas[],int TAM)
{
	float maior;
	for (int i=0;i<TAM;i++)
	{
	  if (i==0)	
	     maior = notas[i];
	  if (maior<notas[i]) 
	      maior = notas[i];
	}
	return (maior);
}
//=============================================
//FUNÇÃO ENTRA INVÁLIDA NO VETOR
//=============================================
float verificaNota(float nota)
{
	do{
		if((nota<0) || (nota>10))
		{
			cout<<"\n Digite uma nota valida: ";
			cin>>nota;
		}
	}while((nota<0) || (nota>10));

	return nota;
}
//===============================================










