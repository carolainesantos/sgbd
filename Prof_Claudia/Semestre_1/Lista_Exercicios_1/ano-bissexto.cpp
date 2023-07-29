#include <iostream>
#include <stdio.h>
int ano;
using namespace std;

main()
{
	system("chcp 65001");
	cout<<"\n\t ...Ano Bissexto...\n";
	cout<<"\n Digite o ano: ";
	cin>>ano;
	 
	if(ano % 400 == 0)  /*essa linha verifica se o resto da divisão do ano por 400 
	for resto igual a 0 entra*/
        cout <<"Ano é bissexto";
    else
	{
		// As duas condições precisam ser verdadeiras
		if ((ano % 4 == 0) && (ano % 100 != 0)) 
           cout <<"Ano é bissexto";
        else
           cout <<"Não é bissexto";
	} /*sem as duas condições o programa não consegue validar todos os anos possiveis*/ 
}
    	 





