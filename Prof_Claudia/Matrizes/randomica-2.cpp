/*2. Altere o programa: matriz_randomica.cpp
   * Mude o tamanho da matriz para 20x20 oK
   * Após gerar a matriz pergunte qual o número a pessoa deseja procurar na matriz.
   * Imprima a quantidade de números igual ao que o usuário informou e  que apareceram na matriz.*/
   
#include <iostream>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int const TAM = 20;
int matriz[TAM][TAM];
int i,j,col,lin; 
float num;

//função para fazer funcionar o gotoxy
void gotoxy(int x, int y)
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(hOut,Position);
}

main()
{
	system("65001");
	srand(time(NULL));  // função que inicializa o gerador de números randômicos
    gotoxy(15,3);
    cout<<" MATRIZ GERADA DE FORMA RANDÔMICA ";//Forma aleatoria
    
    for(i=0;i<TAM;i++) //controla a linha          
     { 
        for (j=0;j<TAM;j++)//controla a coluna
        {
          matriz[i][j]=(rand()%100)+1; //vetor recebendo um número aleatório
	    }
    }
    
  // Impressão Matriz Gerada de Forma Randômica
    lin=5; 
    for(i=0;i<TAM;i++)//controla a linha          
    { 
		col=15;
        for (j=0;j<TAM;j++)//controla a coluna
        {
          	gotoxy(col,lin); 
          	cout<<matriz[i][j];
          	col=col+4;
        }
		lin++; 
    }
       
    cout<<"\n\n\n Digite um número que deseja procurar na matriz: ";
    cin>>num;
    
    for(i=0;i<TAM;i++) 
    {
		col=15;
     	for (j=0;j<TAM;j++)
     	{
     		gotoxy(col,lin); 
        	cout<<matriz[i][j];
        	col=col+4;	
		}
    	lin++;
	}
     	
gotoxy(8,18);
system("PAUSE");
}

