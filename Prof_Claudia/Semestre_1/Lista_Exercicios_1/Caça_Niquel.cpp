#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h>

using namespace std;

	struct dados_jogador
	{
		char nome[80];
		int idade;
		int numCartao;
		int compra = 0; // Armazena os creditos de todas as compras
		int creditos; // Armazena os creditos do jogador
		int saldoFinal;
		int jogadas; // Armazena quantas jogas ele realizou 
	};
		
dados_jogador Jogador;
char escolha, decisao;
int const CREDITOS = 50;

int main() {
	system("chcp 65001");
    srand(time(NULL)); // Semente aleatória

    string simbolos[6] = {"🍒", "🍋", "🍇", "🍏", "🍀", "🎲"}; 
   		
	cout<<"\t\n 📌 Curso:\e[33;1m Análise e Desenvolvimento de Sistemas.\033[0m"; 
	cout<<"\t\n 📌 Semestre:\e[33;1m Primeira Fase, 06/2023.\033[0m";
	cout<<"\t\n 📌 Aluna:\e[33;1m Carolaine dos Santos.\033[0m";				
	cout<<"\t\n 📌 Professora:\e[35;1m C\033[0m\e[32;1ml\033[0m";
	cout<<"\e[36;1ma\033[0m\e[35;1mu\033[0m";
	cout<<"\e[32;1md\033[0m\e[36;1mi\033[0m\e[35;1ma\033[0m";
	cout<<" \e[35;1mW\033[0m\e[32;1me\033[0m\e[36;1mr\033[0m";
	cout<<"\e[35;1ml\033[0m\e[32;1mi\033[0m\e[36;1mc\033[0m\e[35;1mh\033[0m.\n\n";
	
//=======================================================================================================
//==========================INSTRUÇÕES===================================================================
	cout<<" \t \e[33;3m Programa desenvolvido para jogar em um caça-níquel.\033[0m\n";
	cout<<" \t \e[33;3m Antes de começar o jogo, aqui estão algumas informações...\033[0m\n\n";
	cout<<" \t 📍 Este jogo é proibido para menores de 18 anos.\n";
	cout<<" \t 📍 Você iniciara o jogo com um bônus de 50 créditos.\n";
	cout<<" \t 📍 Precisa inserir o número do seu cartão pessoal.\n";
	cout<<" \t 📍 Seu dinheiro será estornado em seu cartão de crédito pessoal.\n";
	cout<<" \t 📍 Divirta-se e Boa Sorte!! \033[0m \n\n";
	cout<<" \e[33;3m Para começar aperte a tecla enter -->\033[0m ";
	getch();
	system("cls");

//=======================================================================================================
//==========================Guardando Informações========================================================
	                           
	cout<<"\n\t\t \e[32;7m ⚡ Cadastro de Jogador(a) ⚡ \033[0m\n\n";
	
	cout<<"\n \e[32;1m Qual o seu nome: ";
	fflush(stdin);
    gets(Jogador.nome);
    cout<<" \n Qual a sua idade: ";
    cin>>Jogador.idade;

	if(Jogador.idade <= 17){
		cout<<" \n";
		cout<<" \e[31;1m Atenção! Este jogo é proibido para menores de  18 anos \033[0m \n";
		cout<<" \e[31;1m Tente novamente após concluir a maior idade.\033[0m\n";
		return 0;
	}
	
    cout<<"\n Digite o número do seu cartão de crédito: ";
    cin>>Jogador.numCartao;                            
    cout<<"\033[0m";

    cout<<"\n \e[35;1m💎 Você começará com um bônus de "<< CREDITOS <<" créditos!💎\033[0m\n"; 
    Jogador.creditos = Jogador.creditos + CREDITOS;
	cout<<"\n \e[35;1mPressione qualquer tecla para começar -->\033[0m "; 
    getch();
    system("cls");
    
//=========================================================================================================
//==============================ESCOLHA====================================================================

	cout<<"\n\n\t\t\t\t \e[33;5m 🎲🍀🤑 Bem-vindo ao Caça-Níquel 🤑🍀🎲\033[0m \n\n";
		
	// Abrindo estrutura de repetição para repetir as jogadas e a frase para jogador
	do{
	    cout<<"\n \e[33;1mPressione J para jogar ou X para sair. \t\t\t\t Créditos: "<<Jogador.creditos<<"\n";                
	    cin>>escolha;
	    cout<<"\033[0m";
	    escolha = toupper(escolha);
		
		// Verificar se ele quer jogar ou nao  
	    if(escolha != 'J'){
			break; 
		}

		Jogador.jogadas++;
		
	    // Girar os rolos
	    string rolo1 = simbolos[rand() % 6]; 
	    string rolo2 = simbolos[rand() % 6];
	    string rolo3 = simbolos[rand() % 6];
	    string rolo4 = simbolos[rand() % 6];
	    string rolo5 = simbolos[rand() % 6];
	    string rolo6 = simbolos[rand() % 6];
	    
	    cout<<"\n"<<rolo1<<" "<<rolo2<<" "<<rolo3<<" "<<rolo4<<" "<<rolo5<<" "<<rolo6<<"\n\n";
	
	    	// Verificar os resultados
	    if (rolo1 == rolo2 && rolo2 == rolo3 && rolo3 == rolo4 && rolo4 == rolo5) {
	        cout<<" \e[32;5m Que sorte! Você ganhou 5000 créditos!!\033[0m \n"; // Todos precisam ser iguais nessa rodada
	        Jogador.creditos = Jogador.creditos + 5000;
	    } else if(rolo1 == rolo2 || rolo2 == rolo3 || rolo3 == rolo4){
	        cout<<"\e[33;10m Parabéns!! Você ganhou 20 créditos.\033[0m\n"; // Se uma dessas for vdd ganha 20 creditos
	        Jogador.creditos = Jogador.creditos + 20;
	    } else {
	        cout<<"\e[35;1m Não foi dessa vez! \n Tente novamente.\033[0m\n";// Se nada der certo, tente de novo
	    	
	  		if(Jogador.creditos < 30){ // Eu nao posso tirar 30 se ele tiver menos q isso 
				Jogador.creditos=0; // Para não ficar o saldo negativo 
			}else{
				Jogador.creditos = Jogador.creditos - 30; 
			}
		}
	    cout<<"\e[30;1m=========================================================================================\033[0m\n";
	
		if(Jogador.creditos < 30){
    		cout<<" \n \e[31;1m Seus créditos estão acabando !! \t\t\t\t\t Créditos: "<<Jogador.creditos<<"\033[0m";
    		cout<<"\n \e[31;1m Compre mais ou encerre o jogo.\033[0m \n\n \e[33;1mPara comprar mais digite C, ou para encerrar digite X: ";
    		cin>>decisao;
    		cout<<"\033[0m";
    		decisao = toupper(decisao);
    		
    		if(decisao == 'C'){
    			int compraAtual;
    			cout<<" \n\e[33;1m Quantos créditos você quer comprar?\n";
    			cin>>compraAtual;
    			cout<<"\033[0m";
				Jogador.compra = Jogador.compra + compraAtual;
      			Jogador.creditos = Jogador.creditos + compraAtual;   
			} else {
				break;
			}
    	}
		
	} while(Jogador.creditos > 10 && escolha == 'J'); // Quando os créditos chegarem em 10 ou menos ou se digitar x pra sair
  
	system("cls");
	
//===========================================================================================================================================

		// Depois de parar de repetir, mostra os resultados e encerra o jogo
		cout<<" \t\t\t \e[35;7m 🏆 Resultado Final 🏆 \033[0m \n\n";
		
		cout<<" \e[35;1mJogador(a):\033[0m "<<"\e[33;1m"<<Jogador.nome<<"\n\n";
		
		cout<<" \e[35;1mIdade: \033[0m"<<"\e[33;1m"<<Jogador.idade<<"\n\n";
		
		cout<<" \e[35;1mNúmero do Cartão de Crédito:\033[0m "<<"\e[33;1m"<<Jogador.numCartao<<"\n\n";
		
		cout<<" \e[35;1mTotal de Créditos:\033[0m " <<"\e[33;1m"<<Jogador.creditos<<"\n\n";
		
		cout<<" \e[35;1mTotal de Jogadas:\033[0m " <<"\e[33;1m"<<Jogador.jogadas<<"\n\n";
		 
		cout<<" \e[36;1mCaro jogador(a)\033[0m " <<"\e[33;1m"<<Jogador.nome<<"\033[0m"<<"\e[36;1m"<< ", 1 crédito vale = $1,00\033[0m";
		
		cout<<"\n\n\n\n"; 
			
	    return 0;
}
	
            
   