#include <stdio.h>
#include <string.h>

int main() 
{
	system("chcp 65001"); 
	printf("\n\t ---Trocando vogais de lugares---");
	
	
	
	
}

/* Desenvolver um programa em C que modificará as vogais de uma frase.

O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor.
Imprimir a frase lida trocando as vogais, isto é, trocar 

'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.

Usar uma função void para realizar a troca e uma função para realizar a impressão da 
frase trocada.

A função deve ter como parâmetro um ponteiro char referente ao vetor.

Foi utilizado a função gets() da biblioteca string.h para realizar a leitura da frase.

Foi usado o switch para realizar as trocas.

Foi considerado só as letras minúsculas. 
*/