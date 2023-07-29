#include <iostream>
#include <stdio.h>

using namespace std;
int num1,num2,num3;

main()
{
	system("chcp 65001");
    cout<<"\n \t Números em Ordem Decrescente...\n";
    cout<<"\n Digite um número: ";
    cin>>num1;
    cout<<"\n Digite o segundo número: ";
    cin>>num2;
    cout<<"\n Digite o terceiro número: ";
    cin>>num3;
    
    if (num1>=num2 && num2>=num3)
    	cout<<"número: "<<num1<<","<<num2<<","<<num3;
    else if (num1>=num3 && num1>=num2) 
    	    cout<<"número: "<<num1<<","<<num3<<", "<<num2;
        else if (num2>=num1 && num3>=num2)
	            cout<<"número: "<<num3<<", "<<num2<<", "<<num1;
            else if (num2>=num3 && num3>=num1)
        	        cout<<"número: "<<num2<<","<<num3<<","<<num1;
                else if (num3>=num2 && num3>=num1)
    	                cout<<"número: "<<num3<<", "<<num1<<", "<<num2;
                    else
                        cout<<"número: "<<num2<<", "<<num1<<", "<<num3;
}












