/*  Exemplo Função Recursiva - 03
	Cálculo de NÚmeros Inteiros	*/

#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + soma(n - 1); 
    }
}

int main() {
	System("chcp 65001");
    int num = 4;
    printf("A soma dos primeiros %d números inteiros é %d\n", num, soma(num));
    return 0;
}

