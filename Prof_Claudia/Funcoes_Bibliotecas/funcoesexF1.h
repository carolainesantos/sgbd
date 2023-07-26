#include <iostream>
#include <conio.h>
using namespace std;

void increase(int num){
    if (num < 5){
    	cout<< num << ", ";
        num += 1;
        increase(num);
    } else if(num == 5) {
    	cout<< num;
    	cout<<"\n\n";
	}else{
    	cout<<"\n\n";
	}
}
