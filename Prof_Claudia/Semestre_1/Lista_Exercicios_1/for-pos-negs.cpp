/*1.FUP que leia a quantidade de números que o usuário desejar
 e verifique quantos destes números são negativos 
 e quantos são positivos.
 Imprima uma mensagem na tela.*/
 
 #include <iostream>
 using namespace std;
 int i,qtd,num,totalPositivo,totalNegativo,totNeutro;

 main()
 {
 	system("chcp 65001");
 	cout<<"\n Quantos números deseja informar?(só número) ";
 	cin>>qtd;
 	
 	for (i=1;i<=qtd;i++)
	{
		cout<<"\n Informe o "<<i<<" º número: ";
		cin>>num;
		if (num<0) {
			totalNegativo++; 
		} else if (num>0) {
			totalPositivo++;
		} else if (num==0) {
			totNeutro++;
		}
	}
	cout<<"\n Total Negativo: "<<totalNegativo;
	cout<<"\n Total Positivo: "<<totalPositivo;
	cout<<"\n Total número neutro(0): "<<totNeutro;
}
