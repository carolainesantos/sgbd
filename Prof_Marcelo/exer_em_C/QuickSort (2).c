#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numTrocas = 0;

int compararNumeros(const void *a, const void *b) {
    numTrocas++;
    return (*(int*)b - *(int*)a); // Compara em ordem decrescente
}

int main() {
    srand(time(NULL));
    system("chcp 65001");
    int numNumeros = 9999;
    int *numeros = (int*)malloc(numNumeros * sizeof(int));

    if (numeros == NULL) {
        fprintf(stderr, "Erro na alocação de memória.\n");
        return 1;
    }

    printf("\n\tNúmeros antes da ordenação:\n\n");
    for (int i = 0; i < numNumeros; i++) {
        numeros[i] = rand() % 9999; 
        printf("\e[36;1m%d\e[36;0m ", numeros[i]);
    }
    printf("\n");

    qsort(numeros, numNumeros, sizeof(int), compararNumeros);

    printf("\n\n\tNúmeros ordenados em ordem decrescente (Quick Sort):\n\n");
    for (int i = 0; i < numNumeros; i++) {
        printf("\e[33;1m%d\e[33;0m ", numeros[i]);
    }
    printf("\n");

    printf("\nNúmero de trocas realizadas pelo Quick Sort: %d\n", numTrocas);

    free(numeros);

    return 0;
}
