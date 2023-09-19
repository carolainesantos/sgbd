/*  Exemplo Função Recursiva - 01 
		Cálculo Fatorial		*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}

int main() {
	system("chcp 65001");
    int num = 5;
    printf("O fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}
