/*
lista encadeada: 
- possui um endereço principal que informa o próximo endereço de elemento;
- o ponteiro aponta para o próximo elemento da lista;
- lista = struct de dados;
- cada ponteiro aponta para o próximo ponteiro;
- o último incluido é o primeiro a ser executado;
----------------------------------------------------
onde é utilizado: função recursiva, cont+z & navegação web;
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next; //aponta para o próximo endereço da pilha
};

//inicia a pilha vazia
struct Node* initialize(){
    return NULL;
};

//verifica se a pilha está vazia
bool isEmpty(struct Node* top){
    return top == NULL;
};

//como add elemento no top da pilha - case 1
struct Node* push(struct Node* top, int value){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Falha na alocação de memória. Não é possível adicionar novos elementos");
        return top;
    }
    newNode->data = value;
    newNode->next = top;
    return newNode;
};

//verifica o tamanho da pilha - case 2
int size(struct Node* top){
    int cont = 0;
    struct Node* temp = top;
    while(temp != NULL){
        cont++;
        temp = temp->next;
    }
    return cont;
    
};

//obtem a estrutura no topo da pilha - case 3
int peek(struct Node* top){
    if(isEmpty(top)){
        printf("Pilha está vazia!! Não há elemento para mostrar");
        exit(EXIT_FAILURE);
    }
    return top->data;
}

//remover do topo - case 4
struct Node* pop(struct Node* top){
    if(isEmpty(top)){
        printf("Pilha está vazia!! Não há elemento para mostrar");
        return top;
    }
    struct Node* temp = top;
    top = top->next;
    free(temp);
    return top;
};

void main(){
    system("chcp 65001");
    //printf("hello word!");
    struct Node* stack = initialize();
    int choice, value;
    
    while(1){
        //printf("-------------------------------------------\n");
        printf("\n\nMenu\n");
        printf("[1] Empilhar (push)\n");
        printf("[2] Verificar o tamanho da pilha\n");
        printf("[3] Verificar o topo da pilha (peek)\n");
        printf("[4] Desempilhar (pop)\n");
        printf("[5] Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);
        //printf("\n-------------------------------------------\n");
        
        switch(choice){
            case 1:
                printf("\nDigite o valor que será empilhado: ");
                scanf("%d",&value);
                
                stack = push(stack, value);
                break;
            
            case 2:
                printf("\nO tamanho da pilha: %d",size(stack));
                break;
                
            case 3:
                if(!isEmpty(stack)){
                    value = peek(stack);
                    printf("\nValor no topo da pilha: %d",value);
                }else{
                    printf("\nA pilha está vazia;");
                }
                break;
                
            case 4:
                if(isEmpty(stack)){
                    stack = pop(stack);
                    printf("Valor desempilhado!!");
    
                }
                break;
            
            case 5:
                exit(0);
        }
    }
}