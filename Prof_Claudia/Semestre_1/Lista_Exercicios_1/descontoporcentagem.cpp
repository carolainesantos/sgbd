/*4. Modifique o progama 2(da lista) deduza 13% do valor
a receber pelo trabalhador. Esse valor é do INSS.
Imprima: o salário bruto, quanto de imposto foi 
tirado do salário e o salário final.*/
#include <iostream>
#include <stdio.h>
using namespace std;
float horas, result,valor, desconto;

main()
{
	system("chcp 65001");
    cout<<"\n \t Salário \n";
    cout<<("\n Digite a quantidade de horas: ");
    cin>>horas;
    cout<<"\n Digite o valor por hora:  ";
    cin>>valor;
    
    result = horas * valor;//essa linha calcula o salário bruto
    desconto = result * 0.13; //essa linha calcula o desconto INSS e valor final salário
    
    cout<<"\n Seu salário é: "<<result; //Salario bruto
    
    cout<<"\n Vc terá de desconto: "<<desconto;//O valor do desconto 
    
    cout<<"\n Vc irá receber: "<<result - desconto;//Salario descontado
}
   
