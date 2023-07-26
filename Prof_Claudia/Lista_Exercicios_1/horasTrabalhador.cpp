#include <iostream>
#include <stdio.h>
using namespace std;

float horas, result,valor;

	main()
{
	system("chcp 65001");
    cout<<"\n \t Salário \n";

    cout<<("\n Digite a quantidade de horas: ");
    cin>>horas;
    cout<<"\n Digite o valor por hora: ";
    cin>>valor;
    
    result = horas * valor; 
    cout<<"\n Vc irá receber: "<<result;
}
 		
