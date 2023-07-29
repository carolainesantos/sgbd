#include <stdio.h>

void main() 
{
	system("chcp 65001");
	int i = 0;
	for (i=0;i<=10;i++) {
		printf ("Laço For\n");
	}
	i=0;
	while(i<=10) {
		printf("Laço While\n");
		i++;
	}
	i=10;
	do{
		printf("Laço DO-WHILE \n");
		i++;
	}while (i <=10);
}
