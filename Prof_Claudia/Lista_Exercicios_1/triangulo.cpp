/*7.FUP que leia 3 valores referentes ao lado de um triângulo.
Após verifique se o triângulo é:
-Triângulo equilátero é o triângulo que tem os comprimentos dos três lados iguais;
-Triângulo isósceles é o triângulo que tem o comprimento de dois lados iguais;
-Triângulo escaleno é o triângulo que tem o comprimento de seus três lados diferentes.
Após imprima uma mensagem informando qual é triângulo ou se os lados informados não formam um triângulo.*/

#include <iostream>

using namespace std;

int a, b, c;
main()
{
	system("chcp 65001");
	cout<<"\n \t Triângulo...\n\n";
    cout << "Digite um número: ";
    cin >>a;
    cout << "Digite o segundo número: ";
    cin >>b;
    cout << "Digite o terceiro número: ";
    cin >>c;

	if((a + b <= c) || (a + c <= b) || (b + c <= a)) //precisa ser maior ou igual 
        cout << "\n Nao é um triângulo";
    else if((a==b) && (b==c))
        cout<<"Equilátero\n"; //todos os lados(centimetros) iguais
    else if((a!=b) && (a!=c) && (b!=c)) //todos os lados diferentes
        cout<<"Escaleno\n";
    else
        cout<<"Isósceles"; //dois lados iguas e um difernte
}

