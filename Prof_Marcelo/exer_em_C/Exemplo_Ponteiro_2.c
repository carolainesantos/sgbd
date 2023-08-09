
#include <stdio.h>
#include <locale.h>

void main() {
	int i=100;
	int *p;
	p=&i;
	
	system("chcp 65001");
	
	printf("\n\t Exemplo Ponteiro 2º \n");
    printf("\n\t Conteudo apontado por p: %d", *p);
    printf("\n\t Conteudo da variavel i: %d", i);
	printf("\n\n");
	
    *p=12;

    printf("\n\t Conteudo apontado por p: %d", *p);
    printf("\n\t Conteudo da variavel i: %d", i);
    printf("\n\n");

    i = 547; //modificando o valor do ponteiro

    printf("\n\t MODIFICANDO O VALOR DO PONTEIRO\n");
    printf("\n\t Conteudo apontado por p: %d", *p);
    printf("\n\t Conteudo da variavel i: %d", i);
    printf("\n\n");
    
    system("pause");
}