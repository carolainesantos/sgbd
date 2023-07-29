#include <iostream>

using namespace std;
int i,cont_menor=0;
float nota,acum_nota=0,media;

main()
{
	system("chcp 65001");
	cout<<"\n\n\t **** Média de Notas ****\n ";
	for (i=0;i<5;i++) // Repete 5 vezes
	{
		cout<<"\n Informe a "<<i+1 <<" ª nota: ";
		cin>>nota;
		acum_nota=acum_nota+nota;// Acumula as notas
		if (nota < 5)
		{
			cont_menor++;// Cont_menor=cont_menor+1
		}
	}
	media = acum_nota / 5;
	cout<<"\n Sua media é: "<<media;
	cout<<"\n Vc possui : "<<cont_menor<<" notas a baixo. ";
	cout<<"\n\n\n\n\n";
}
