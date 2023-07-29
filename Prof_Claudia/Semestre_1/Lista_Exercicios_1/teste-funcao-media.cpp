
#include <iostream>
#include <stdio.h>
using namespace std;

float mediaAluno(float nota1, float nota2, float nota3);
float resultM,nota1,nota2,nota3;

main()
{
	system("chcp 65001");
	cout<<"\n\n \t CALCULANDO A MÉDIA DE NOTAS \n ";
	cout<<"\n\n Digite a 1ª nota: ";
	cin>>nota1;
	cout<<"\n\n Digite a 2ª nota: ";
	cin>>nota2;
	cout<<"\n\n Digite a 3ª nota : ";
	cin>>nota3;
	resultM= mediaAluno(nota1, nota2,nota3);
	cout<<"\n Media é : "<<resultM;
}//=======================================================================
//função mediaAluno
float mediaAluno(float nota1, float nota2, float nota3)
{
	return ((nota1 + nota2 + nota3) / 3);
	
}//===============================================================================

