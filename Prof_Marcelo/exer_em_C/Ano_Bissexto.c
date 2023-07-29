#include <stdio.h>

int main() {
	
	system("chcp 65001");
    int ano;
    printf("\n\t ...Ano Bissexto...\n");
    printf("\n Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
    	printf("\n");
        printf(" Ano é bissexto");
    } else {
        if ((ano % 4 == 0) && (ano % 100 != 0)) {
        	printf("\n");
            printf(" Ano é bissexto");
        } else {
            printf("\n");
            printf(" Não é bissexto");
            printf("\n");
        }
    }

    return 0;
}