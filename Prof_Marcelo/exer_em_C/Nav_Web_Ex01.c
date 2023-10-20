#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Pagina{ 
    char url[100];
    char titulo[100];
};

struct No{
    struct Pagina pagina;
    struct No* proximo;
};

struct No* push(struct No* topo, struct Pagina novaPagina){
    struct No* novoNo = (struct No*) malloc(sizeof(struct No));
    novoNo->pagina = novaPagina;
    novoNo->proximo = topo;
    topo=novoNo;
    
    return topo;
};

struct Pagina peek(struct No* topo){
    if(topo == NULL){
        printf("Erro: Pilha vazia");
        exit(1);
    }
    return topo->pagina;
}

struct No* pop(struct No* topo){
    if(topo == NULL){
        printf("Erro: Pilha vazia");
        exit(1);
    }
    struct No* temp = topo;
    topo = temp->proximo;
    free(temp);
    return topo;
}

void main(){
    system("chcp 65001");
    
	struct No* topo = NULL;
                
    struct Pagina pagina01;
    strcpy(pagina01.titulo, "GOOGLE");
    strcpy(pagina01.url, "https://www.google.com/br/");
    topo = push(topo, pagina01);
                
    struct Pagina pagina02;
    strcpy(pagina02.titulo, "Netflix");
	strcpy(pagina02.url, "https://www.netflix.com/br");
    topo = push(topo, pagina02);
                
    struct Pagina pagina03;
    strcpy(pagina03.titulo, "Facebook");
    strcpy(pagina03.url, "https://facebook.com");
    topo = push(topo, pagina03);
            
    struct Pagina mostrarPagina = peek(topo);
    printf("Titulo do topo: %s",mostrarPagina.titulo);      
}