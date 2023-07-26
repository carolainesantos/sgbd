#include <iostream>
using namespace std;

void numeroDecremento(int num1){
	if (num1 > 0){
		cout<<num1 <<" ";
		num1 -= 1;
		numeroDecremento(num1);
	}else if(num1 == 0){
		cout<<num1;
		cout<<"\n\n";
	}else{
		cout<<"Digite um número positivo!\n";
	}
}