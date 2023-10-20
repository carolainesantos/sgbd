#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Encontrar maior numero do array
int encontrarMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
// Fução Radix Sort 
void radixSort(int array[], int n, int *trocas) {
	// Recebe array e um ponteiro pra trocas
    int max = encontrarMax(array, n); 
    for (int exp = 1; max / exp > 0; exp *= 10) { // Executar radix
        int output[n];
        int count[10] = {0}; // aux
        for (int i = 0; i < n; i++) {
            count[(array[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            output[count[(array[i] / exp) % 10] - 1] = array[i];
            count[(array[i] / exp) % 10]--;
            (*trocas)++; // Contar as trocas 
        }

        for (int i = 0; i < n; i++) {
            array[i] = output[i]; // Array preenchido na ordem correta 
        }
    }
}
int main() {
    system("chcp 65001");
    printf("\n\t  Exemplo de Ordenação");
    printf("\n\t\t Radix Sort\n\n");

    int n = 10000; 
    int array[n];
    int trocas = 0; 

    // Num Aleatorios 
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 9999 + 1;
    }

    printf("\n\t Array antes da ordenação: \n\n");
    printf(" \e[33;1m");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\033[0m");

    radixSort(array, n, &trocas);

    printf("\n\n\n\t Array após a ordenação: \n\n");
    printf(" \e[32;1m");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\033[0m");

    printf("\n\n Número de trocas realizadas: %d\n", trocas);

    return 0;
}
