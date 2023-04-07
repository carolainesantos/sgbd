//Testar A Letra 
#include <iostream>
#include <ctype.h> 
using namespace std; 
char letra;//só aceita um caracter 
 
main()
{
	system("chcp 65001");
	cout<<"\n\t PROGRAMA TESTE UMA LETRA\n";
	cout<<"\n Digite apenas 'F' ou 'M': ";
	cin>>letra;
	
	letra=toupper (letra);//Transforma em maiuscula a letra 
	
	if ((letra=='f') || (letra=='F')){ //SE DIGITAR F OU f entra como Feminino
		cout<<"\n F-Feminino";
	} else {
		if(letra=='M') { // SE DIGITAR M ou m entra como Masculino
			cout<<"\n M-Masculino";
		}
		else{
			cout<<"\n Digitou coisa errada";//SE DIGITAR QUALQUER OUTRA COISA APARECE ERRADO
		}
	}
	cout<<"\n\n\n";
}

