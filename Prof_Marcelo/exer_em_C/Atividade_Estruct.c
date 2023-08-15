/*   1) Crie um programa em C com uma estrutura 
	   pessoa que tenha: 

   • um vetor char de 11 elementos denominado cpf.
   • um inteiro denominado idade. 
   • um vetor char de 20 elementos chamado nome. 

	- Criar um ponteiro que aponte para a estrutura;

	- Criar uma função que recebe o ponteiro e preencha 
	os dados de 5 pessoas informados pelo usuário e 
	outra função que recebe o ponteiro e imprima os cadastros. */
//=================================================================

#include <stdio.h>
#include <string.h>

	typedef struct Pessoa		
	{
		char nome[20];
		char cpf[11];
		int idade;
	} dados_pessoa; 

void cadPessoa();
void mostrarDados(dados_pessoa* cadastro);

int main()
{
	system("chcp 65001");
	dados_pessoa *cadastro[5];

	cadPessoa(cadastro);
	printf("\n\n");
	mostrarDados(cadastro);
	
	printf("\n Pressione enter para sair\n");
	getchar();
	return 0;
}
//==Funçoes=====================================================================
void cadPessoa(dados_pessoa* cadastro) {
	for(int i=0;i<5;i++) {
		printf("\n\t * Cadastro da %dª Pessoa *\n\n", i+1);
		printf("\n Digite o nome: ");
		scanf("%19s", &cadastro[i].nome);
		
		printf("\n Digite o CPF (11 dígitos): ");
        scanf("%10s", &cadastro[i].cpf);
        
        printf("\n Digite a sua idade: ");
        scanf("%d", &cadastro[i].idade);
    }
    return cadastro;
}
//==============================================================================
void mostrarDados(dados_pessoa* cadastro) {
	for(int i=0;i<5;i++){
		printf("\n");
		printf("\n ==========================================\n");
		printf("\n ***Exibindo Cadastro de Informações*** %d\n", i + 1, "\n\n");
		printf("Nome: %s\n", cadastro[i].nome, "\n");
    	printf("CPF: %s\n", cadastro[i].cpf, "\n");
    	printf("Idade: %d\n", cadastro[i].idade, "\n");
    	printf("\n");	
	}
}
