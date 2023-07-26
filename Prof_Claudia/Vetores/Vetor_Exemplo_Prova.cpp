/* FUP que leia um vetor de 15 letras,
conte quantas vogais há no vetor.

Vetor = (e sempre usar o for) sequencia de espaços */ 

#include <iostream>
using namespace std; 

int const TAM = 5;
char letras[TAM];
int cont_vogal;

main()
{
	system("chcp 65001");
	cout<<"\n\t Ler 15 letras e contar quantas vogais foram digitado!\n";
		for(int i=0;i<5;i++){
			cout<<"\n Informe a "<<i+1<<"ª letra: ";
			cin>>letras[i];
			
		letras[i]= toupper(letras[i]);
		if ((letras[i]=='A')||(letras[i]=='E')||(letras[i]=='I')||(letras[i]=='O')||(letras[i]=='U'))
	      cont_vogal++;
		}
		cout<<"\n\n No vetor foram informadas "<<cont_vogal<<" vogais ";
}