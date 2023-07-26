#include <iostream>
using namespace std;


float tabuada(int num, int i =0)
{
	if(i <= 10){
	 	cout<<"\n"<<num<<" * " <<i<<" = " <<num * i; 
	 	i++;
	 	return tabuada(num, i);
	} else {
		return 1;
	}
 	
}