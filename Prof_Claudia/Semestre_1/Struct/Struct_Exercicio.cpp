//Altere o programa para calcular e armazenar a média de cada aluno.

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int const TAM = 3;
/*Criando a struct */

  struct dados_aluno
  {
    char nome[50]; 
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
    float media;
  };
dados_aluno Aluno[TAM];

//Protótipo das funções

float calcularMedia(float nota1, float nota2);
float verificarNota(float nota);

char nome_pesq[50];//para procurar um aluno

main()
{
   system("chcp 65001");// para usar acentos
   cout<<fixed<<setprecision(1);
   cout<<" \n-------- Cadastro de aluno ---------\n";
	for (int i=0;i<TAM;i++)
   { cout<<"\n\n Nome do aluno: ";
     fflush(stdin);//Para limpar o buffer  
     gets(Aluno[i].nome);
     cout<<" \n Disciplina: ";
     fflush(stdin);
     gets(Aluno[i].disciplina);
     
     cout<<"\n Informe a 1ª nota: ";
     cin>>Aluno[i].nota_prova1;
     Aluno[i].nota_prova1 = verificarNota(Aluno[i].nota_prova1);
    
     cout<<"\n Informe a 2ª nota: ";
     cin>>Aluno[i].nota_prova2;
     Aluno[i].nota_prova2 = verificarNota(Aluno[i].nota_prova2);
    
     Aluno[i].media = calcularMedia(Aluno[i].nota_prova1,Aluno[i].nota_prova2);
     
     
   
   }
  
  cout<<"\n\n --------- Imprimindo os dados da struct ---------\n\n";
  for (int i=0;i<TAM;i++)
  {
   cout<<"\n Nome: ";
   puts (Aluno[i].nome);
   cout<<"\n Disciplina: ";
   puts(Aluno[i].disciplina);
   cout<<"\n Nota da Prova 1: " << Aluno[i].nota_prova1;
   cout<<"\n Nota da Prova 2: " << Aluno[i].nota_prova2;
   cout<<"\n Média das Notas da Prova: " << Aluno[i].media;
   cout<<"\n========================================================\n"; 
 }
  cout<<"\n Pesquisando pelo Nome... ";
  cout<<"\n Informe o nome do aluno: ";
  fflush(stdin);//Para limpar o buffer  
  gets(nome_pesq);//criando uma nova variável
  for (int i=0;i<TAM;i++)
  {
  if(strcmpi(Aluno[i].nome,nome_pesq)==0)
     {
     	cout<<"\n Nome: ";
        puts (Aluno[i].nome);
        cout<<"\n Disciplina: ";
        puts(Aluno[i].disciplina);
        cout<<"\n Nota da Prova 1: " <<Aluno[i].nota_prova1;
        cout<<"\n Nota da Prova 2: " <<Aluno[i].nota_prova2;
        cout<<"\n Média das Notas da Prova: "<<Aluno[i].media;
        cout<<"\n====================================================\n"; 
	 }
  }
  cout<<"\n Pesquisando por médias...\n";
  cout<<"\n Digite (1) para menor media ou (2) para maior media: \n";
  int op;
  cin>>op;
  
  switch(op)
  fflush(stdin);
  gets();
  int i;
  
  	if(pesq_media == 1){
  		if(Aluno[i].media < 7){
  		cout<<"\n Média menor que 7:"<<media_Menor_7;
	  }
	}
  	
}// Fecha main
//=================FUNÇÃO====================
//Função para Verificar Notas Erradas
float verificarNota(float nota)
{
 do{      
   if ((nota<0)||(nota>10))
     {
        cout<<"\n ⚠️ Nota Inválida ⚠️ \n";
    	cout<<"\n Informe a nota novamente: ";
        cin>>nota;
     }
  }while ((nota<0)||(nota>10));
return (nota);
}
//===========================================
float calcularMedia(float nota1, float nota2)
{ 
 return ((nota1+nota2)/2);// Calcula e retorna a média
}
//===================================================
float media_Menor_7( float mediaMenores){
	int cont_menor_7=0;
	for(int i=0; i<; i++){
		if (media < 7)
	 	cont_menor_7++;//conta media menores de 7
	}
  	return(cont_menor_7);// Retorna qtde de medias menores q 7
}











