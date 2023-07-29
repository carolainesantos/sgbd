
/* FUP que verifique se o Número é Par ou Impar */
#include <stdio.h>

main()
{//inicio do bloco
	 system("chcp 65001");
	 int num;
	 printf("\n=======================================\n"); 
	 printf("\n\t Par ou Ímpar? \n");
	 printf("\n=======================================\n"); 
	 
	 printf("\n\n Informe um Número:"); 
	 scanf("%f", &num);
 
	 if (num%2==0)
	  {
	  	printf("\n ESSE NÚMERO É PAR");
	  }
	  else
	  {
	  	printf("\n ESSE NÚMERO É ÍMPAR");
	  }
	   printf("\n\n\n");
} //fecha o bloco

