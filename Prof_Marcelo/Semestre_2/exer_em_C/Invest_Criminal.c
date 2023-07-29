/* Transformando de C++ para a linguagem C*/

#include <stdio.h>
#include <ctype.h> 

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0); // Desativa o buffer de saída para impressão imediata
	
	system("chcp 65001");
	system("color 0b");
	printf("\n\t ... Investigação Criminal ...\n");
	
	char letra;
	int totalSim = 0;
	
	printf("\n Trocou mensagem com a vítima? S ou N: ");
	scanf("%c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim++;
		
	printf("\n Esteve no local do crime? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
	
	printf("\n É parente ou reside perto da vítima? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
		
	printf("\n Devia algum valor para a vítima? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
		
	printf("\n Trabalha ou trabalhou com a vítima? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
		
	printf("\n Possui algum tipo de relacionamento amoroso com a vítima? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
		
	printf("\n Ficou feliz pelo destino fatídico da vítima? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
		
	printf("\n Possui algum tipo de arma de fogo? S ou N: ");
	scanf(" %c", &letra);
	letra = toupper(letra);
	
	if (letra == 'S')
		totalSim = totalSim + 1; 
	
	printf("\n Total de Sim: %d", totalSim);
	
	if (totalSim == 4) {
		printf("\n Suspeito do Crime");
	}
	else {
		if ((totalSim >= 5) && (totalSim <= 7)) {
			printf("\n Possível Criminoso");
		} 
		else {
			if (totalSim == 8) {
				printf("\n Assassino");
			}
			else { 
				printf("\n Inocente");
			}
		}
	}
	
	return 0;
}
