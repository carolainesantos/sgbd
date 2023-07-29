 /*Imprima 5 resultados: 
a soma, a subtração, o produto e a divisão entre esses números.
Atenção: como resultado mostre obrigatoriamente 
2 casas decimais como resultado.*/
 #include <iostream>
 #include <iomanip>//biblioteca numeros com casas decimais
 
 using namespace std;
 
 float num1,num2,num3,num4,num5,soma,sub,mult,divi;
 
 main()
 {
 	system("chcp 65001");
	cout<<"\n \t Soma, Subtração, Produto e Divisão....\n";
	cout<<"\n Digite o primeiro número: ";
	cin>>num1;
	cout<<"\n Digite o segundo número: ";
	cin>>num2;
	cout<<"\n Digite o terceiro número: ";
	cin>>num3;
	cout<<"\n Digite o quarto número: ";
	cin>>num4;
	cout<<"\n Digite o quinto número: ";
	cin>>num5;
	
	cout<<fixed<< setprecision(2);
	
	soma = num1 + num2 + num3 + num4 + num5;
	cout<<"\n A soma é: "<<soma;
	
	sub = num1 - num2 - num3 - num4 - num5;
	cout<<"\n A subtração é: "<<sub;
	
	mult = num1 * num2 * num3 * num4 * num5;
	cout<<"\n A multiplicação é: "<<mult;
	
	divi = num1 / num2 / num3 / num4 / num5;
	cout<<"\n A divisão é: "<<divi;
 }
 			/*OBS = NÃO USAR "div" como nome de variavel, pois (div) 
			é uma função de uma biblioteca e o programa vai travar*/ 
