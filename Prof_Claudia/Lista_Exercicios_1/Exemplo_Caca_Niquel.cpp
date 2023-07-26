#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
char escolha;

int main() {
	system("chcp 65001");
    srand(time(NULL)); // semente aleatória

    char simbolos[6] = {'B', 'C', 'L', 'O', 'U', 'S'}; // bar, cereja, limão, laranja, uva, sino

    cout << "Bem-vindo ao caça-níquel!\n\n";
    cout << "Pressione J para jogar ou X para sair.\n";
    cin >> escolha;
    if (escolha == 'x' || escolha == 'X') {
            cout << "Obrigado por jogar!\n";
            return 0;
        }
    while ((escolha=='j')|| (escolha=='J')) 
	{
       if (escolha == 'x' || escolha == 'X') {
            cout << "Obrigado por jogar!\n";
            break;
        }

        // girar os rolos
        char rolo1 = simbolos[rand() % 6];
        char rolo2 = simbolos[rand() % 6];
        char rolo3 = simbolos[rand() % 6];

        cout << "\n" << rolo1 << " " << rolo2 << " " << rolo3 << "\n\n";

        // verificar os resultados
        if (rolo1 == rolo2 && rolo2 == rolo3) {
            cout << "Jackpot! Você ganhou 100 créditos.\n";
        } else if (rolo1 == rolo2 || rolo2 == rolo3 || rolo1 == rolo3) {
            cout << "Par! Você ganhou 10 créditos.\n";
        } else {
            cout << "Nada! Tente novamente.\n";
        }
        cout << "Pressione J para jogar ou X para sair.\n";
        cin >> escolha;
        
    }

    return 0;
}
