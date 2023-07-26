#include <iostream>
#include <cmath> //biblioteca de funçoes matemáticas
//<cmath> biblioteca de matematica
using namespace std;
float num,result1,result2,result3,result4;

main()
{
	system("chcp 65001");
	cout<<"\n \t Número ao Quadrado, Raiz quadrada, o Triplo e o Dobro ! \n";
	cout<<("\n Digite um número: ");
    cin>>num; 
    
    result1 = pow(num, 2);
    cout<<"\n Resultado ao quadrado: "<<result1;
   
    result2 = sqrt(num); 
    cout<<"\n Resultado da Raiz Quadrada: "<<result2;
    
    result3 = (num * 3);
    cout<<"\n Resultado ao Triplo: "<<result3;
    
    result4 = (num * 2);
    cout<<"\n Resultado em dobro: "<<result4;
}


