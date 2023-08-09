#include <stdio.h>
main() {
	system("chcp 65001");
	
	int *p;
	int i=10, j=20, k=30;
	p=&j;
	printf("\n\n");
	
	printf("1-Valor de *p = %d\n", *p);
	printf("1-Endereço de p = %d\n", p);
	p++;
	printf("\n");
	
	printf("2-Valor de *p = %d\n", *p);
	printf("2-Endereço de p = %d\n", p);
	printf("\n");
	
	printf("3-Endereço de p = %d\n", --p);
	printf("\n");
	
	printf("4-Endereço de i = %d\n", &i);
	printf("4-Endereço de j = %d\n", &j);
	printf("4-Endereço de k = %d\n", &k);
	printf("\n\n");
	
	system("pause");
	
}