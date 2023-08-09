// Exemplo de Ponteiro e endereço de memória

#include <stdio.h>
#include <locale.h>

void main() {
	
	system("chcp 65001");
    printf("\n\t Aula sobre a utilização de ponteiros e funções!\n");

    int i = 10;
    int *p;

    p = &i;

    printf("\n O valor de i é: %d", i);
    printf("\n O valor apontado por p é: %d", *p);
    printf("\n O endereço de i armazenado em p é: %d\n", p);

    *p = 20; //modificando o valor do ponteiro

    printf("\n\t MODIFICANDO O VALOR DO PONTEIRO\n");
    printf("\n O valor de i é: %d", i);
    printf("\n O valor apontado por p é: %d", *p);
    printf("\n O endereço de i armazenado em p é: %d ", p);
    printf("\n\n");
    printf("===============================================");
    printf("\n\n\n");
    
    system("pause");
}