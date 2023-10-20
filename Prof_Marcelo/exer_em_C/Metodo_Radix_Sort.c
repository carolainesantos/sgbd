#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Encontrar maior numero
int encontrarMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int preencherArrayAleatoriamente(int array[], int n) {
    int trocas = 0;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 10000 + 1;
        trocas++;
    }
    return trocas;
}

// Fução Radix Sort 
void radixSort(int array[], int n, int *trocas) {
    // ... (código do Radix Sort)
}

int main() {
    system("chcp 65001");
    printf("\n\t  Exemplo de Ordenação");
    printf("\n\t\t Radix Sort\n\n");

    int n = 10000; // Tamanho do array
    int array[n];
    int trocasGeradasAleatoriamente = preencherArrayAleatoriamente(array, n);
    int trocasRadixSort = 0; // Contador de trocas durante o Radix Sort

    printf("\n\tArray antes da ordenação:\n\n\n");
    printf(" \e[31;1m");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\033[0m");

    radixSort(array, n, &trocasRadixSort);

    printf("\n\n\n\tArray após a ordenação:\n\n\n");
    printf(" \e[32;1m");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\033[0m");

    printf("\n\nNúmero de trocas geradas aleatoriamente: %d\n", trocasGeradasAleatoriamente);
    printf("Número de trocas realizadas pelo Radix Sort: %d\n", trocasRadixSort);

    return 0;
}
