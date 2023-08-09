#include <stdio.h>

int main() {
	int i, j;
	int *p; // Um ponteiro para um Inteiro
	printf("\n\n %d %d", p, &i); // Imprimi o valor de p e o endereço de i 
	

    p = &i;
    printf("\n \e[33;1m%d %d\e[33;0m",p,&i); // Imprime o valor de p e o endereço de i 
    printf("\n\n");
    return 0;
}