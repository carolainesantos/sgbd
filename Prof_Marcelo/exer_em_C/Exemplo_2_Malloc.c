#include <stdio.h>
#include <stdlib.h>
main() {
	int i,n=5;
	int *p = (int *) malloc(n*sizeof(int));
	
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