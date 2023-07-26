/*5. FUP para calcular o valor do volume de uma lata de óleo, 
utilizando a fórmula: VOLUME = 3.14159 *R² * altura*/

#include <iostream>
using namespace std;
float raio,volume,altura;

main()
{
	system("chcp 65001");
	cout<<"\n \t Volume de uma lata de óleo\n\n";
	cout<<"\n Digite a altura da lata: ";
	cin>>altura;
	cout<<"\n(o raio é a distância do centro do circulo ate a borda)\n";
	cout<<"\n Digite o raio da lata: ";
	cin>>raio;
	
	if ((altura <= 0) || (raio <= 0))
	{
		cout<<"\n Impossível calcular";
	}
	else 
	{
		volume = (raio * raio) * 3.14159 * altura;
		cout<<"\n O volume é de: "<<volume;
	}
}
