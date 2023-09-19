#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
	int data;
	struct node* next;
}; 


struct Queue {
	struct Node* front;
	struct Node* rear; 
};

struct Queue* initialize() {
	struct Queue* q= (struct Queue*) malloc(sizeof(struct Queue));
	q->front = q->rear = NULL;
	return q;
};
bool isEmpty(struct Queue* q){
	return q->front == NULL;
}

void enqueue(struct Queue* q, int value) {
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	if(newNode == NULL) {
		printf("\n Falha na alocação de memória ");
		return;
	}
	newNode->data = value;
	newNode->next = NULL;
	if(isEmpty(q)) {
		q->front = q->rear = newNode;
	} else {
		q->rear->next = newNode;
		q->rear = newNode;
	}
};

void dequeue(struct Queue* q) {
	if(isEmpty(q)) {
		printf("\n Fila Vazia!");
		return;
	}
	struct Node* temp = q->front;
	q->front = q->front->next; 
	free(temp);
	if(q->front == NULL){
		q->rear = NULL;
	} 
}
int peek(struct Queue* q){
	if(isEmpty(q)){
		printf("\n Fila Vazia!");
		exit(EXIT_FAILURE);
	}
	return q->front->data;
}

void printQueue(struct Queue* q) {
	if(isEmpty(q)) {
		printf("\n Fila Vazia!"); 
		return;
	}
	struct Node* temp = q->front;
	printf("\n Fila: ");
	while(temp != NULL) {
		printf("%d,", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	struct Queue* queue = initialize();
	int choice, value;
	
	
	while(1){
		printf("\n *** Menu ***");
		printf("\n1. Enfileirar\n ");
		printf("\n2. Desenfileirar\n");
		printf("\n3. Ver Frente\n");
		printf("\n4. Imprimir Fila\n");
		printf("\n5. Sair\n");
		printf("\n Escolha uma opção: ");
		scnf("%d", &choice);
		
		swich(choice){
			case: 1: 
				printf("Digite o valor a ser enfileirado: ");
				scanf("%d", &value);
				enqueue(queue, value);
				break;
			case 2:
				printf("Digite o valor a ser enfileirado: ");
				scanf("%d", &value);
				enqueue(queue, value);
				break;
				
			case 3:
				if (!isEmpty(queue)) {
                    value = peek(queue);
                    printf("Valor na frente da fila: %d\n", value);
                } else {
                    printf("Fila vazia!\n");
                }
            break;
			case 4:
                if (estaVazia(&umaFila)){
                printf("\nFila vazia!!!\n\n");
            }
            break;
			case 5:
				printf("Saindo do programa.\n");
                while (!isEmpty(queue)) {
                    dequeue(queue);
                }
                free(queue);
                exit(EXIT_SUCCESS);

            default:
                printf("Opção inválida! Tente novamente.\n");
		}
	}
	
	// Incluir Fila
	
	enqueue(queue, 10);
	enqueue(queue, 20);
	enqueue(queue, 5);
	enqueue(queue, 99);
	
	// Retirar da Fila
	
	dequeue(queue);	
	printQueue(queue);
	
	dequeue(queue);	
	printQueue(queue);
	
	
	dequeue(queue);	
	printQueue(queue);
}














