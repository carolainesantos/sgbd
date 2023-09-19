#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001");
    
    printf("\n \t\t\e[35;1m Exercício 01\n");
    printf("\n \t \e[33;1mIMC, usando malloc() e Free()\e[36;0m \n\n");
    
    float peso;
    
    float *alt = (float *)malloc(sizeof(float)); 

    if (alt == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("Digite sua altura: ");
    scanf("%f", alt);
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    float imc = peso / ((*alt) * (*alt));
    printf("\n Seu IMC é: %f", imc);

    free(alt); 

    return 0;
}
