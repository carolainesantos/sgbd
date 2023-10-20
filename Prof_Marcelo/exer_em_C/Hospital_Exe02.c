#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct para representar um paciente
struct Paciente {
    char nome[50];
    int idade;
    int gravidade;
};

// Nó da fila
struct No {
    struct Paciente paciente;
    struct No* proximo;
};

// Estrutura da fila
struct Fila {
    struct No* frente;
    struct No* tras;
};

//========= Protótipos de funções ==================================
void enqueue(struct Fila* fila, struct Paciente novoPaciente);
void dequeue(struct Fila* fila, struct Paciente* pacienteRemovido);
struct Paciente front(struct Fila* fila);
void exibirFila(struct Fila* fila);


//============ Funçoes==============================================

// Adicionar um paciente à fila 
void enqueue(struct Fila* fila, struct Paciente novoPaciente) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->paciente = novoPaciente;
    novoNo->proximo = NULL;
    if (fila->tras == NULL) {
        fila->frente = novoNo;
    } else {
        fila->tras->proximo = novoNo;
    }
    fila->tras = novoNo;
}

// Remover um paciente da fila 
void dequeue(struct Fila* fila, struct Paciente* pacienteRemovido) {
    if (fila->frente != NULL) {
        struct No* temp = fila->frente;
        if (pacienteRemovido != NULL) {
            *pacienteRemovido = temp->paciente;
        }
        fila->frente = fila->frente->proximo;
        free(temp);
        if (fila->frente == NULL) {
            fila->tras = NULL;
        }
    }
}

// Obter o próximo paciente na fila 
struct Paciente front(struct Fila* fila) {
    struct Paciente pacienteVazio = {"", 0, 0}; 

    if (fila->frente != NULL) {
        return fila->frente->paciente;
    }

    return pacienteVazio;
}

// Exibir todos os pacientes na fila
void exibirFila(struct Fila* fila) {
    struct No* atual = fila->frente;

    if (atual == NULL) {
        printf("A fila de pacientes está vazia.\n");
    } else {
        printf("Fila de pacientes:\n");
        while (atual != NULL) {
            printf("Nome: %s\n", atual->paciente.nome);
            printf("Idade: %d\n", atual->paciente.idade);
            printf("Gravidade: %d\n", atual->paciente.gravidade);
            printf("\n");
            atual = atual->proximo;
        }
    }
}


int main() {
	system("chcp 65001");
	
	// Inicializando a fila
    struct Fila fila; 
    fila.frente = NULL;
    fila.tras = NULL;

    int opcao;
    do {
    	printf("\e[32;1m");
    	printf("\n\t 🏥 Fila de um Hospital 🏥 \n\n");
    	printf("\t =========================");
        printf("\n\t Menu de Opções:\n");
        printf("\t 1. Adicionar paciente \n");
        printf("\t 2. Remover paciente \n");
        printf("\t 3. Próximo paciente \n");
        printf("\t 4. Exibir fila de pacientes\n");
        printf("\t 0. Sair\n");
        printf("\t =========================\n\n");
        printf("\t Escolha uma opção: ");
        scanf("%d", &opcao);
        printf("\033[0m");

        switch (opcao) {
            case 1: {
                struct Paciente novoPaciente;
                printf("\n\t Nome: ");
                scanf("%s", novoPaciente.nome);
                
                printf("\n\t Idade: ");
                scanf("%d", &novoPaciente.idade);
                
                int gravidade;
				do {
    				printf("\n\tGravidade (1 a 10): ");
    				scanf("%d", &gravidade);
    				if (gravidade < 1 || gravidade > 10) {
        				printf("A gravidade deve estar entre 1 e 10. Tente novamente.\n");
   					}
				} while (gravidade < 1 || gravidade > 10);
				novoPaciente.gravidade = gravidade;
				enqueue(&fila, novoPaciente);
                printf("\t\n Paciente adicionado à fila com sucesso!\n");
                system("cls");
                break;
            }
            case 2: {
                struct Paciente pacienteRemovido;
                dequeue(&fila, &pacienteRemovido);
                if (strlen(pacienteRemovido.nome) > 0) {
                    printf("Paciente removido da fila:\n");
                    printf("Nome: %s\n", pacienteRemovido.nome);
                    printf("Idade: %d\n", pacienteRemovido.idade);
                    printf("Gravidade: %d\n", pacienteRemovido.gravidade);
                } else {
                    printf("\n\n A fila de pacientes está vazia!\n");
                }
                break;
            }
            case 3: {
                struct Paciente proximoPaciente = front(&fila);
                if (strlen(proximoPaciente.nome) > 0) {
                    printf("Próximo paciente na fila:\n");
                    printf("Nome: %s\n", proximoPaciente.nome);
                    printf("Idade: %d\n", proximoPaciente.idade);
                    printf("Gravidade: %d\n", proximoPaciente.gravidade);
                } else {
                    printf("\n\n\t A fila de pacientes está vazia!\n");
                }
                break;
            }
            case 4:  {
                exibirFila(&fila);
                break;
			}
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    // Libererando a memória para os nós da fila
    while (fila.frente != NULL) {
        dequeue(&fila, NULL);
    }

    return 0;
}



