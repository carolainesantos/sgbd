#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Cliente {
    char nome[50];
    char senha[20];
};

struct Fila {
    int capacidade;
    struct Cliente *dados;
    int primeiro;
    int ultimo;
    int nItens;
};

void criarFila(struct Fila *f, int c) {
    f->capacidade = c;
    f->dados = (struct Cliente *)malloc(f->capacidade * sizeof(struct Cliente));
    f->primeiro = 0;
    f->ultimo = -1;
    f->nItens = 0;
}

void inserir(struct Fila *f, const char *nome, const char *senha) {
    if (f->ultimo == f->capacidade - 1) {
        f->ultimo = -1;
    }

    f->ultimo++;
    strcpy(f->dados[f->ultimo].nome, nome);
    strcpy(f->dados[f->ultimo].senha, senha);
    f->nItens++;
}

void remover(struct Fila *f, const char *senha) {
    int i;
    for (i = f->primeiro; i <= f->ultimo; i++) {
        if (strcmp(f->dados[i].senha, senha) == 0) {
            printf("Cliente removido:\n");
            printf("Nome: \e[35;1m%s\e[33;0m\n", f->dados[i].nome);
            printf("Senha: \e[35;1m%s\e[33;0m\n", f->dados[i].senha);

            for (int j = i; j < f->ultimo; j++) {
                strcpy(f->dados[j].nome, f->dados[j + 1].nome);
                strcpy(f->dados[j].senha, f->dados[j + 1].senha);
            }
            f->ultimo--;
            f->nItens--;
            return;
        }
    }
    printf("Senha não encontrada na fila.\n");
}


int estaVazia(struct Fila *f) {
    return (f->nItens == 0);
}


int estaCheia(struct Fila *f) {
    return (f->nItens == f->capacidade);
}


void mostrarFila(struct Fila *f) {
    int cont, i;

    for (cont = 0, i = f->primeiro; cont < f->nItens; cont++) {
        printf("Cliente %d:\n", cont + 1);
        printf("Nome: \e[35;1m%s\e[33;0m\n", f->dados[i].nome);
        printf("Senha: \e[35;1m%s\e[33;0m\n", f->dados[i].senha);
        i = (i + 1) % f->capacidade;
    }
    printf("\n");
}

void mostrarPrimeiroCliente(struct Fila *f) {
    if (estaVazia(f)) {
        printf("\nFila vazia!!!\n\n");
    } else {
        printf("\nPrimeiro cliente na fila:\n");
        printf("Nome: \e[35;1m%s\e[33;0m\n", f->dados[f->primeiro].nome);
        printf("Senha: \e[35;1m%s\e[33;0m\n", f->dados[f->primeiro].senha);
    }
}

int main() {
    int capacidade;
    struct Fila umaFila;
	
	system("chcp 65001");
	
    printf("Capacidade da fila? ");
    scanf("%d", &capacidade);
    criarFila(&umaFila, capacidade);

    while (1) {
        printf("\n\e[33;1m1 - Inserir cliente\n");
        printf("2 - Remover cliente\n");
        printf("3 - Mostrar fila de clientes\n");
        printf("4 - Mostrar o 1º cliente da fila\n");
        printf("5 - Sair\n\e[33;0m\n");
        int opcao;
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                if (estaCheia(&umaFila)) {
                    printf("\nFila Cheia!!!\n\n");
                } else {
                    char nome[50];
                    char senha[20];

                    printf("\nNome do cliente: ");
                    scanf("%s", nome);
                    
                    srand(time(NULL));
                    int random_password = rand() % 10000;
                    snprintf(senha, sizeof(senha), "%04d", random_password);

                    printf("Senha gerada automaticamente: \e[33;1m%s\e[33;0m\n", senha);
                    inserir(&umaFila, nome, senha);
                }
                break;
            }
            
            case 2: {
                if (estaVazia(&umaFila)) {
                    printf("\nFila vazia!!!\n\n");
                } else {
                    char senha[20];
                    printf("\nSenha do cliente a ser removido: ");
                    scanf("%s", senha);
                    remover(&umaFila, senha);
                }
                break;
            }
            
            case 3:
                if (estaVazia(&umaFila)) {
                    printf("\nFila vazia!!!\n\n");
                } else {
                    printf("\nConteúdo da fila de clientes:\n");
                    mostrarFila(&umaFila);
                }
                break;
                
            case 4:
            	mostrarPrimeiroCliente(&umaFila);
                break;
                
            case 5:
            	printf("\n\e[31;1mSaindo do sistema!\e[31;0m");
                exit(0);
                
            default:
                printf("\nOpção Inválida\n\n");
        }
    }
    return 0;
}
