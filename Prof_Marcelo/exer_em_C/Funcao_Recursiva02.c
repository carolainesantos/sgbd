/*  Exemplo Função Recursiva - 02 
		Cálculo Fibonacci		*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
	System("chcp 65001");
    int num = 6;
    printf("O termo %d na sequência de Fibonacci é %d\n", num, fibonacci(num));
    return 0;
}
