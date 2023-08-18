#include <stdio.h>
#include <stdlib.h>
main() {
	int *ptr_a;
	ptr_a = malloc(sizeof(int));
	//cria a area necessaria para 01 inteiro e 
	// coloca em 'ptr_a o endereço desta area
	if(ptr_a == NULL)
	{
		printf("Memória insuficiente!\n");
		exit(1);
	}
	
	printf("Endereço de ptr_a: %p\n", ptr_a);
	*ptr_a = 45;
	printf("Conteúdo de ptr_a: %d\n", *ptr_a);
	free(ptr_a); // libera a area alocada .
}