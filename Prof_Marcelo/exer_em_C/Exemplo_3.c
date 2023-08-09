#include <stdio.h>

int main() 
{
	
	system("chcp 65001");
	float Nota1, Nota2;
	float Media;
	
	// Atribuição do Valores das medias
	Nota1 = 6.6;
	Nota2 = 8.2;
	
	Media = (Nota1 + Nota2) / 2.0;
	
	printf("Média Final: %2.2f", Media);
	// No momento da execução o sinal %s vai ser substituido 
	// Pelo valor da variavel Media com SEIS casas decimais 
	// Media Final: ...
	
	// Espera q o usuario pressione uma tecla
	getch();
	
	return 0;
}
