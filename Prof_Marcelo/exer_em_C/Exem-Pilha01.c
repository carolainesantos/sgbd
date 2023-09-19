// Exemplo de Pilha

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura utilizada
struct Node {
	int data;
	struct Node* next;
};

//===Funçoes====================================

// Iniciar uma pilha vazia
struct Node* initialize() {
	return NULL;
};

// Verificar se a pilha esta vazia 
bool isEmpty(struct Node* top) {
	return top == NULL;
};

// Adicionar elemento no topo da pilha 
struct Node* push (struct Node* top, int value) {
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	if (newNode == NULL) {
		printf("Falha na alocação de memória. Não é possivel adicionar novos elementos");
		return top;
	}
newNode->data = value;
newNode->next = top;
return newNode;
};

// Função o tamanho da pilha
int size (struct Node* top){
	int count = 0;
	struct Node* temp = top;
	
	while (temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
};

// Obtem a estrutura no topo da pilha
int peek(struct Node* top){
	
if(isEmpty (top)){
		printf("Pilha vazia!! Não há elemento para mostrar");
		exit(EXIT_FAILURE);
	}
	return top->data;
}

int main (){
	struct Node* stack = initialize();
	int choice, value;
	while(1) {
		printf("Menu: \n");
		printf("1- Empilhar (Push)");
		printf("2- Desempilhar (Pop)");
		printf("3- Elemento do topo (Peek)");
		printf("4- Ver tamanho da pilha\n");
		
		printf("Escolha uma opção: ");
		printf("%d", &choice);
		
	switch(choice) {
		case 1: 
			printf("Digite o valor a ser empilhado\n");
			scanf("%d", value);
			stack = push(stack, value);
			printf("\n");
			break;
		case 2: 
			printf("Digite o valor a ser empilhado\n");
			scanf("%d", value);
			stack = push(stack, value);
			printf("\n");
			break;
		case 3:
			if(!isEmpty(stack)){
				value = peek(stack);
				printf("Valor do topo da pilha: %\n",value);
			} else {
				printf("Pilha vazia!! \n");
			}
				printf("\n");
			break;	
		case 4:
			printf("Tamanho da Pilha: %d\n", size(stack));
			printf("\n");
		break;	
		}//fecha switch
	} // fecha while
} //fecha main