#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct para representar um livro
struct Livro {
    char titulo[100];
    char autor[100];
    char isbn[20];
};

// Nó da lista simples
struct No {
    struct Livro livro;
    struct No* proximo;
};

// Protótipos de funções
void push(struct No** topo, struct Livro novoLivro);
struct Livro peek(struct No* topo);
struct Livro pop(struct No** topo);
struct No* removerLivro(struct No* inicio, char* isbn);
struct Livro buscarLivro(struct No* inicio, char* isbn);
void exibirLivros(struct No* inicio);


// Função para inserir um livro no início da lista 
void push(struct No** topo, struct Livro novoLivro) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->livro = novoLivro;
    novoNo->proximo = *topo;
    *topo = novoNo;
}

// Função para remover o livro no topo da pilha 
struct Livro pop(struct No** topo) {
    struct Livro livroVazio = {"", "", ""}; // Livro vazio para indicar que a pilha está vazia

    if (*topo != NULL) {
        struct No* temp = *topo;
        *topo = (*topo)->proximo;
        struct Livro livroRemovido = temp->livro;
        free(temp);
        return livroRemovido;
    }

    return livroVazio;
}

// Função para ver o livro no topo da pilha 
struct Livro peek(struct No* topo) {
    struct Livro livroVazio = {"", "", ""}; // Livro vazio para indicar que a pilha está vazia

    if (topo != NULL) {
        return topo->livro;
    }

    return livroVazio;
}


// Função para buscar um livro na lista com base no ISBN
struct Livro buscarLivro(struct No* inicio, char* isbn) {
    struct No* atual = inicio;
    struct Livro livroVazio = {"", "", ""}; // Livro vazio para indicar que o livro não foi encontrado

    while (atual != NULL) {
        if (strcmp(atual->livro.isbn, isbn) == 0) {
            return atual->livro;
        }
        atual = atual->proximo;
	}
    return livroVazio;
}


// Função para exibir todos os livros da pilha
void exibirLivros(struct No* topo) {
    struct No* atual = topo;

    while (atual != NULL) {
        printf("Título: %s\n", atual->livro.titulo);
        printf("Autor: %s\n", atual->livro.autor);
        printf("ISBN: %s\n", atual->livro.isbn);
        printf("\n");
        atual = atual->proximo;
    }
}


int main() {
	system("chcp 65001");
	
	// Inicialize a lista vazia
    struct No* inicio = NULL; 

    int opcao;
    do {
    	printf("\e[36;1m");
    	printf("\n\t 📚 Biblioteca 📚 \n\n");
    	printf("\t ----------------");
        printf("\n\t Menu de Opções: \n");
        printf("\t 1. Inserir Livro \n");
        printf("\t 2. Remover Livro \n");
        printf("\t 3. Buscar Livro \n");
        printf("\t 4. Exibir Livros \n");
        printf("\t 0. Sair \n");
        printf("\t ----------------\n\n");
        printf("\t Escolha uma opção: \n");
        scanf("\t%d", &opcao);
        printf("\033[0m");

        switch (opcao) {
            case 1: {
                struct Livro novoLivro;
                printf("Título: ");
                scanf("%s", novoLivro.titulo);
                printf("Autor: ");
                scanf("%s", novoLivro.autor);
                printf("ISBN: ");
                scanf("%s", novoLivro.isbn);
                push(&inicio, novoLivro);
                printf("Livro inserido com sucesso!\n");
                break;
            }
            case 2: {
                struct Livro livroRemovido = pop(&inicio);
                if (strlen(livroRemovido.isbn) > 0) {
                    printf("Livro removido do topo da pilha:\n");
                    printf("Título: %s\n", livroRemovido.titulo);
                    printf("Autor: %s\n", livroRemovido.autor);
                    printf("ISBN: %s\n", livroRemovido.isbn);
                } else {
                    printf("A pilha está vazia!\n");
                }
                break;
            }
            case 3: {
                char isbnParaBuscar[20];
                printf("Digite o ISBN do livro que deseja buscar: ");
                scanf("%s", isbnParaBuscar);
                struct Livro livroEncontrado = buscarLivro(inicio, isbnParaBuscar);
                if (strlen(livroEncontrado.isbn) > 0) {
                    printf("Livro encontrado:\n");
                    printf("Título: %s\n", livroEncontrado.titulo);
                    printf("Autor: %s\n", livroEncontrado.autor);
                    printf("ISBN: %s\n", livroEncontrado.isbn);
                } else {
                    printf("Livro com ISBN %s não encontrado.\n", isbnParaBuscar);
                }
                break;
            }
            case 4:
                printf("Lista de livros (pilha):\n");
                exibirLivros(inicio);
                break;
            case 0:
                printf("\e[32;1m Saindo do programa...\033[0m \n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    // Libera a memória alocada para os livros restantes na pilha
    while (inicio != NULL) {
        pop(&inicio);
    }

    return 0;
}



            