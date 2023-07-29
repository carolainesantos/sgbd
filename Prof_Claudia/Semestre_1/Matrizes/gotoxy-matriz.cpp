/* 1- Imprima a matriz no outro canto da tela*/

#include <windows.h>
#include <iostream>

using namespace std; 

//função para fazer funcionar o gotoxy
void gotoxy(int x, int y)
{ 
	HANDLE hOut;
  	COORD Position;
  	hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
  	Position.X = x; 
  	Position.Y = y; 
  	SetConsoleCursorPosition(hOut,Position); 
}//=========================================================

int const TAM = 3;//foi utilizado somente uma constante - para matriz quadrada

int mat[TAM][TAM],i,j,m,n,col,lin;

main() 
{ 
	lin=5; // posiciona aonde vai começar a matriz 
	 
	 // posiciona o cursor na coluna e linha indicados no gotoxy 
	gotoxy(10,2); // Coluna e Linha 
	cout<<" Matriz "; //isso só foi usado para escrever o título! 
	 
	//leitura da matriz 
	for(i=0;i<TAM;i++) // leitura da linha da matriz 
	{ 
		col=100; // posiciona o cursor na coluna desejada e precisa estar entre os for 
		for (j=0;j<TAM;j++) // leitura da coluna da matriz 
		{
			if(i == 0 && j == 0){
				col = col + 17;
			}
			gotoxy(col,lin); // para posicionar o cursor para ler o elemento da matriz 
		  	cin>>mat[i][j];
		  	
		  	if(i == 0 && j == 0){
				col = col - 17;
			}
			col=col+6; // dá espaços entre cada elemento da matriz 
		  
		} lin=lin+1; //pular uma linha 
	}//fecha o for 
	
		gotoxy(8,15); 
		system("PAUSE"); // dá uma pausa na tela
}


