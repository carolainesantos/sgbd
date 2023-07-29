/*4ª QUESTÃO:Esta é uma questão LIVRE (mas nem tanto).
Usesua CRIATIVIDADE e SUPREENDA a professora com os seus
PODERES de PESQUISA e das POTENCIALIDADES que a linguagemC++ possui.*/

#include <iostream>
using namespace std;
int carinha,sapato,calca,corpo;
main()
{
	system("chcp 65001");
	system("color 0");
	cout<<"\n\t\t 🎨🖌️ Formando um Boneco...";
	cout<<"\n Escolhao Rosto: ";
	cout<<"\n [1] 👩";
	cout<<"\n [2] 👨";
	cout<<"\n [3] 🤗 \n";
	cin>>carinha;
	
	cout<<"\n Escolha: ";
	cout<<"\n [1] 👚";
	cout<<"\n [2] 👕";
	cout<<"\n [3] 🥼\n";
	cin>>corpo;
	
	cout<<"\n Escolha: ";
	cout<<"\n [1] 👖";
	cout<<"\n [2] 🩳";
	cout<<"\n [3] 🩲\n";
	cin>>calca;
	
	cout<<"\n Escolha: ";
	cout<<"\n [1] 👡👡";
	cout<<"\n [2] 👟👟";
	cout<<"\n [3] 🥿🥿 \n";
	cin>>sapato;

	system("cls");
	switch(carinha)
	{
		case 1: 
		{
			cout<<"\n 👩";
			break;
		}
		case 2: 
		{
			cout<<"\n 👨🏼";
			break;
		}
		case 3:
		{
			cout<<"\n 🤗 ";
			break;
		}
	}
	
	switch(corpo)
	{
		case 1: 
		{
			cout<<"\n 👚";
			break;
		}
		case 2: 
		{
			cout<<"\n 👕";
			break;
		}
		case 3:
		{
			cout<<"\n 🥼";
			break;
		}
	}
		switch(calca)
	{
		case 1: 
		{
			cout<<"\n 👖";
			break;
		}
		case 2: 
		{
			cout<<"\n 🩳";
			break;
		}
		case 3:
		{
			cout<<"\n 🩲";
			break;
		}
	}
	switch(sapato)
	{
		case 1: 
		{
			cout<<"\n👟👟";
			break;
		}
		case 2: 
		{
			cout<<"\n👟👟";
			break;
		}
		case 3:
		{
			cout<<"\n🥿🥿";
			break;
		}
	}
}
