/* 		Desenvolver um programa em C que modificará as vogais de uma frase.

	    • O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor. 
		    
		• Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' 
		    pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.  
		      
		• Usar uma função void para realizar a troca e uma função para realizar a 
		    impressão da frase trocada.  
		      
		• Foi utilizado a função gets() da biblioteca string.h para realizar
		    a leitura da frase.
		       
		• Foi considerado só as letras minúsculas.                                   */
//====================================================================================

#include <stdio.h>
#include <string.h>

char frase[100];
char *p;

void troca(char* p);
void mostrarResult(char* p);

int main () {
	
	system("chcp 65001");
	printf("\n\t \e[35;1m*** Trocando vogais ***\n");
	
	printf("\n Digite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	printf("\033[0m");
	p = &frase;
	troca(p);
	mostrarResult(p);

	printf("\033[0m");
}

void troca(char* p) {
	for(int i=0; i<100;i++) {
		char letra = p[i];
		switch(letra) {
		 	case 'a' : {
		 		p[i] = 'u';
				break;
			}
			case 'e': {
			 	p[i] = 'o';
				break;
			}
			case 'i': {
				p[i] = 'u';
				break;
			}
			case 'o': {
				p[i] = 'a';
				break;
			}
			case 'u': {
				p[i] = 'e';
				break;
			}
			 default: {
				break;
			 }
		 }
	} 
}

void mostrarResult(char* p) {
	printf("\e[33;1m Troca: %s", p);
}










