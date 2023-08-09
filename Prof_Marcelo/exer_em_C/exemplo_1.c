
#include <stdio.h>

int main()
{
	int valor = 10; //->> %d Núm inteiro
	float peso = 78.90; //->> %f num com virgula
	char caracter = 'm'; //->> %c pra mostrar apenas 1 caracter
	
	printf("\n=================================================\n");
	printf("\n\t Exemplo (1)\n\n");
	printf("Valor: %d \n", valor);
	printf("Peso: %.2f \n", peso);
	printf("Caracter: %c \n", caracter);
	
	printf("\n=================================================\n");
	printf("\n\t Exemplo (2)\n\n");
	char* nome = "Carol"; //->> %s Para mostrar varios caracteres 
	
	printf("Valor: %d | peso: %.2f | caracter: %c | nome: %s \n", valor, peso, caracter, nome);
	printf("\n=================================================\n\n");
	
	printf("\n\t Exemplo (3)\n\n");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Idade: %d", idade);
	return 0;
}
















