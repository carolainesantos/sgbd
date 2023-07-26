#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

  /* Criando a struct */
  struct dados_aluno
  {
    char nome[50];
    char disciplina[50];
    float nota_prova1;
    float nota_prova2;
    float media;
  };

dados_aluno Aluno[3];// Criar a variavel do tipo struct
char nome_pesq[50];// Procurar um nome
float mediaNotas(float nota1, float nota2);

main()
{
	system("chcp 65001");// Para usar acentos
 	for(int i=0;i<3;i++){
		cout<<" \n---------- Cadastro de aluno -----------\n\n\n";
		cout<<"Nome do aluno: ";
		fflush(stdin); // Para limpar o buffer em Windows, use o: fflush(stdin) 
		 
		gets(Aluno[i].nome);// Somente para vetores de caracter , proibido usar com int 
		  
		cout<<"\n Disciplina: ";
		fflush(stdin);
		gets(Aluno[i].disciplina);
		cout<<"\n Informe a 1ª. nota: ";
		cin>>Aluno[i].nota_prova1;	
	  	do{
	  		if((Aluno[i].nota_prova1 < 0) || (Aluno[i].nota_prova1>10)){
	  			cout<<"\n Digite uma nota válida: ";
	  			cin>>Aluno[i].nota_prova1;		
	  		}
	  	}while((Aluno[i].nota_prova1 < 0) || (Aluno[i].nota_prova1>10));
  		cout<<"\n Informe a 2ª. nota: ";
  		cin>>Aluno[i].nota_prova2;

	  	do{
		  	if((Aluno[i].nota_prova2 < 0 ) || (Aluno[i].nota_prova2>10)){
		  		cout<<"\n Digite uma nota válida: ";
		  		cin>>Aluno[i].nota_prova2;
		  	}
		}while((Aluno[i].nota_prova2 < 0) || (Aluno[i].nota_prova2 >10));
		Aluno[i].media = mediaNotas(Aluno[i].nota_prova1,Aluno[i].nota_prova2);// Chamando função
		system("cls");	
	}
		cout<<"\n Deseja ver as informações de algum dos alunos? ";
		cin>>resposta;
		int i;
		if(resposta == 's'){
			cout<<"\n Digite o nome do aluno: ";
			cin>>(Aluno[i].nome);
		}
		
		cout<<"\n------- Imprimindo os dados da struct ------\n\n";
		for(int i= 0;i<3;i++){
			cout<<"\n Nome: ";
			puts (Aluno[i].nome);
			cout<<"\n Disciplina: ";
			puts(Aluno[i].disciplina);
			cout<<"\n\n Nota da Prova 1: "<< Aluno[i].nota_prova1;
			cout<<"\n\n Nota da Prova 2: "<< Aluno[i].nota_prova2;
			cout<<"\n\n A média das notas é: "<<Aluno[i].media;
			cout<<"\n\n=========================================================";
		}
}
//===Função Media==============================================================
float mediaNotas(float nota1, float nota2){
	return((nota1 + nota2)/2);
}

// Tabela ascii completa pesquisar sobre
