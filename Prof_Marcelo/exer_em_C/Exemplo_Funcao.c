/* Exemplo de funçao normal */
/*
#include <stdio.h>
#include <locale.h> // Para usar o setLocale

int multiplicar(int x, int y);

int main() {
	system("chcp 65001");
	
	int num1=3;
	int num2=4;
	int resultado=0;
	
	printf("\nAntes de chamar a função: ");
	printf("\nNum 1 é: %d", num1);
	printf("\nNum 2 é: %d", num2);	
	resultado = multiplicar(num1, num2);
	printf("\n\n O resultado da multiplicação é: %d", resultado);
	
	printf("\n\nDepois de chamar a função:");	
	printf("\nNum 1 é: %d", num1);	
	printf("\nNum 2 é: %d", num2);
	
}

int multiplicar(int x, int y){
	x = 20; // Modificando X para 20
	return x*y;
	
} */


//===Exemplo de Ponteiros===================================

#include <stdio.h>
#include <locale.h> // Para usar o setLocale

int multiplicar(int *x, int *y);

int main() {
	system("chcp 65001");
	
	int num1=3;
	int num2=4;
	int resultado=0;
	
	printf("\n Antes de chamar a função: ");
	printf("\n Num 1 é: %d", num1);
	printf("\n Num 2 é: %d", num2);	
	resultado = multiplicar(&num1, &num2);
	printf("\n\n O resultado da multiplicação é: %d", resultado);
	
	printf("\n\n Depois de chamar a função:");	
	printf("\n Num 1 é: %d", num1);	
	printf("\n Num 2 é: %d", num2);
	
}

int multiplicar(int *x, int *y){
	*x = 20; // Modificando X para 20
	return *x * *y;
	
}


















