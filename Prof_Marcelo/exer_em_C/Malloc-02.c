#include <stdlib.h>
#include<stdio.h>

void main(){
	system("chcp 65001");
	
	        printf("\n\t\t\t\e[35;1m Exercício 02\n");
			printf("\n \t\e[33;1m Média aluno, usando malloc() e Free() \e[36;0m\n\n");
	        
			float *notas = malloc(4*sizeof(float));
			float media = 0.0;
			float acum_notas = 0.0;
			int cont = 0;

			
			for(int i=0;i<=4;i++){
				printf(" Informe a \e[35;1m%dª\e[36;0m nota: ",i+1);
				scanf("%f",&notas[i]);
				acum_notas += notas[i];
			}
			
			media = acum_notas/5.0;
			printf("\n Sua média é: %f",media);
			free(notas);
}







