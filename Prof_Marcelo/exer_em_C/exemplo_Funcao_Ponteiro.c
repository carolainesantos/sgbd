
#include <stdio.h>
#include <locale.h> // Para usar o setLocale

void troca(int i, int j);

int main() {
	system("chcp 65001");
	
	int i= 50;
	int j= 12;
	
	printf("\n Antes: i=%d j=%d", i, j);
	troca(&i, &j);
	printf("\nDepois: i=%d j=%d", i, j);
	
	return 0; 
}	
void troca(int i, int j){
	int temp= *x;
	*x = *y;
	*y = temp;
	
}