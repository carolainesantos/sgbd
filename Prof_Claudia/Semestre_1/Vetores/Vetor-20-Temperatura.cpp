#include <iostream>
using namespace std;

int const TAM = 4; //sao 20 temperaturas- 4 é só pra teste 
float cont_menorMedia;
float media,celsius[TAM];

float verificaCelsius(float celsius);//declarando função
float mediaVetor(float celsius[],int TAM);//declarando função
float menorMedia(float celsius[],float media,int TAM);//declarando função
main()
{
	system("chcp 65001");
	cout<<"\n\n Informe 20 temperaturas em celsius \n";
	for(int i=0;i<TAM;i++)
	{
		cout<<"\n Informe a "<<i+1<<"ª temperatura: ";
		cin>>celsius[i];
		celsius[i] = verificaCelsius(celsius[i]); // Chamando função verificaCelsius
	}
	media = mediaVetor(celsius,TAM);
	cout<<"\n A média das temperaturas é: "<<media;	
	cout<<"\n Temperatura(s) menor(es) q a media é(são): "<<menorMedia(celsius,media,TAM);
}	
//===========================================================================================
// Criando Função Inválida
float verificaCelsius(float celsius) 
{
	do{
		if((celsius<-20) || (celsius>50))
		{
			cout<<"\n Digite uma temperatura válida: ";
			cin>>celsius;
		}
	}while((celsius<-40) || (celsius>50));
	
	return(celsius);
}
//===========================================================================================
// Criando Função de Media das Temperaturas
float mediaVetor(float celsius[],int TAM)
{
	float media,acum=0;
	
 	for(int i=0;i<TAM;i++)
	{ 
		acum = acum + celsius[i];
  	} 
  	
  	media = acum / TAM;
  	
  	return(media);//Retorna a média calculada
}//===========================================================================================

//Criando Função Menores q a media 
float menorMedia(float celsius[],float media,int TAM)
{ 
	float cont_menorMedia=0;
	
	for(int i=0;i<TAM;i++)
	 {
	 	if (celsius[i]<media)
	 	   cont_menorMedia++;
	 }
  return(cont_menorMedia);
}//============================================================================================


	
	
	
	
	
	
	
	
	
	
	






