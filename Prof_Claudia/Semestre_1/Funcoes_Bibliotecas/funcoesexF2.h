#include <iostream>
#include <conio.h>
using namespace std;

int parAteCinquenta(int num, int auxiliar = 0){
    if (num <= 50){
    	if(num % 2 == 0){
    		cout<< num << ", ";
		}
		num++;
		auxiliar++;
        return parAteCinquenta(num, auxiliar);
    } else{
    	return auxiliar;
	}
}
