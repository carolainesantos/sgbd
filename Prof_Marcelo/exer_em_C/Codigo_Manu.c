#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para trocar dois elementos de um array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para implementar o Gnome Sort e contar as trocas
int gnomeSort(int arr[], int n) {
    int index = 0;
    int swaps = 0; // Variável para contar as trocas

    while (index < n) {
        if (index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        } else {
            // Trocar os elementos e retroceder
            swap(&arr[index], &arr[index - 1]);
            index--;
            swaps++; // Incrementar o contador de trocas
        }
    }

    return swaps;
}

int main() {
	system("chcp 65001");
    int n = 10000; // Tamanho do vetor
    int arr[n];   // Declara um vetor de 10.000 elementos

    // Preenche o vetor com valores aleatórios entre -1000 e 1000
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // Exibe os números antes da ordenação
    printf("\n\nNúmeros antes da ordenação:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Chama a função Gnome Sort para ordenar o vetor e obter o número de trocas
    int numSwaps = gnomeSort(arr, n);

    // Exibe os números depois da ordenação
    printf("\nNúmeros depois da ordenação:\n\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Exibe o número de trocas realizadas durante a ordenação
    printf("\nNúmero de trocas realizadas: %d\n", numSwaps);

    return 0;
}
