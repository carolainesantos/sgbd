#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Defina a struct para representar uma página web struct Pagina
   struct Pagina {
	char url[100];
	char titulo[100];
	};
	
 //Nó da pilha 
   struct No {
	struct Pagina pagina;
	struct No* proximo;
	};

struct No* push(struct No* topo, struct Pagina novaPagina) {
	struct No* novoNo = (struct No*) malloc(sizeof(struct No));
	novoNo->pagina = novaPagina;
	novoNo->proximo = topo;
	topo=novoNo;	
	return topo;
}

struct Pagina peek (struct No* topo) {
	if(topo == NULL) {
		printf("Erro: pilha vazia. \n");
		exit(1);
	}
	return topo->pagina;	
}

struct Pagina pop (struct No* topo);

int main() { 
	system("chcp 65001");

	struct No* topo = NULL;
	 
	struct Pagina pagina01;
	strcpy(pagina01.titulo, "google");
	strcpy(pagina01.url, "https://www.google.com.br");
	topo = push(topo, pagina01); // Empilhar 
	
	peek(topo);
	
	struct Pagina pagina02;
	strcpy(pagina02.titulo, "Netflix");
	strcpy(pagina02.url, "https://www.netflix.com/br/");
	
	// Empilhar
	topo = push(topo, pagina02);
	
	// Mostrar Titulo do topo 
	struct Pagina mostrarPagina = peek(topo);
	printf("Titulo do topo: %s", mostrarPagina.titulo);
	peek(topo);
}
